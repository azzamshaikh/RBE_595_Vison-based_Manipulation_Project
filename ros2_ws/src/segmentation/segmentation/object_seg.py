import rclpy
from rclpy.node import Node
import numpy as np
import cv2 as cv
from threading import Thread
from sensor_msgs.msg import Image, CameraInfo, PointCloud2, PointField
from std_msgs.msg import Float32MultiArray, Int32, Int32MultiArray, Header
from cv_bridge import CvBridge
import sensor_msgs_py.point_cloud2 as pc2
from tqdm import tqdm
from scipy.spatial import KDTree
import ros2_numpy
import struct
from geometry_msgs.msg import Point
from tf2_ros import TransformListener, Buffer
from geometry_msgs.msg import TransformStamped
import tf_transformations
import open3d as o3d


class PointCloudExtractor(Node):
    def __init__(self):
        super().__init__('pointcloud_extractor')
        self.break_flag_ = False
        # Subscribers
        self.bounding_box = None
        self.bounding_box_sub = self.create_subscription(
            Int32MultiArray,
            "/yolo/prediction/bbox",
            self.bounding_box_callback,
            10
        )

        self.num_predictions = None
        self.num_predictions = self.create_subscription(
            Int32,
            "/yolo/prediction/number_of_predictions",
            self.num_predictions_callback,
            10
        )

        self.depth_image = None
        self.depth_image_sub = self.create_subscription(
            Image,
            '/realsense/depth/image_raw',
            self.depth_callback,
            10
        )

        self.camera_intrinsics = None
        self.camera_info_sub = self.create_subscription(
            CameraInfo,
            '/realsense/depth/camera_info',
            self.camera_info_callback,
            10
        )

        self.pointcloud = None
        self.pc_rgb = None
        self.pointcloud_kd_tree = None
        
        self.pointcloud_sub = self.create_subscription(
            PointCloud2,
            '/realsense/points',
            self.pointcloud_callback,
            10
        )

        # TF2 setup
        self.tf_buffer = Buffer()
        self.tf_listener = TransformListener(self.tf_buffer, self)

        self.extracted_pointcloud_pub = self.create_publisher(PointCloud2,
                                                              '/extracted_pointcloud',
                                                              10)

        # Attributes
        self.bridge = CvBridge()
        self.downsample_factor = 1

    def get_transform(self, target_frame, source_frame):
        """Get the transform between two frames."""
        try:
            transform = self.tf_buffer.lookup_transform(
                target_frame, source_frame, rclpy.time.Time(), timeout=rclpy.duration.Duration(seconds=1.0)
            )
            return transform
        except Exception as e:
            self.get_logger().warn(f"Failed to get transform: {e}")
            return None
        
    # def transform_points_to_world(self, points, transform):
    #     """Transform points from the camera frame to the world frame."""
    #     # Extract transformation components
    #     translation = np.array([transform.transform.translation.x,
    #                             transform.transform.translation.y,
    #                             transform.transform.translation.z])
    #     rotation = tf_transformations.quaternion_matrix([
    #         transform.transform.rotation.x,
    #         transform.transform.rotation.y,
    #         transform.transform.rotation.z,
    #         transform.transform.rotation.w
    #     ])

    #     # Transform points
    #     points_homogeneous = np.hstack((points, np.ones((points.shape[0], 1))))  # Convert to homogeneous coordinates
    #     transformed_points = (rotation @ points_homogeneous.T).T + translation
    #     return transformed_points[:, :3]  # Return in non-homogeneous form
    

    def transform_point(self, trans, pt):
        # https://answers.ros.org/question/249433/tf2_ros-buffer-transform-pointstamped/
        quat = [
            trans.transform.rotation.x,
            trans.transform.rotation.y,
            trans.transform.rotation.z,
            trans.transform.rotation.w
        ]
        mat = tf_transformations.quaternion_matrix(quat)
        pt_np = [pt.x, pt.y, pt.z, 1.0]
        pt_in_map_np = np.dot(mat, pt_np)

        pt_in_map = Point()
        pt_in_map.x = pt_in_map_np[0] + trans.transform.translation.x
        pt_in_map.y = pt_in_map_np[1] + trans.transform.translation.y
        pt_in_map.z = pt_in_map_np[2] + trans.transform.translation.z

        return pt_in_map

    def camera_info_callback(self, msg):
            # Save camera intrinsics for projection
            self.camera_intrinsics = {
                "fx": msg.k[0],  # Focal length x
                "fy": msg.k[4],  # Focal length y
                "cx": msg.k[2],  # Principal point x
                "cy": msg.k[5]   # Principal point y
            }

    def num_predictions_callback(self, msg):
        self.num_predictions = msg.data

    def depth_callback(self, msg):
        # Convert ROS Image message to OpenCV format
        self.depth_image = self.bridge.imgmsg_to_cv2(msg, desired_encoding="passthrough")

    def bounding_box_callback(self, msg):
        # Save the bounding box [x_min, y_min, x_max, y_max]
        self.bounding_box = np.array(msg.data)

    def pointcloud_callback(self, msg):
        # Save the point cloud
        pc_array = ros2_numpy.point_cloud2.point_cloud2_to_array(msg)
        print(pc_array)
        xyz = pc_array['xyz']
        rgb = pc_array['rgb']
        self.pointcloud = xyz
        self.pc_rgb = rgb
        self.pointcloud_kd_tree = KDTree(xyz)
        point_cloud = o3d.geometry.PointCloud()
        point_cloud.points = o3d.utility.Vector3dVector(np.array(self.pointcloud))
        o3d.io.write_point_cloud("output_full.pcd", point_cloud)
        self.get_logger().info("Saved")
        self.break_flag_ = True
    
    
    def downsample_depth_image(self, depth_image):
        """Downsample the depth image."""
        original_height, original_width = depth_image.shape
        new_width = original_width // self.downsample_factor
        new_height = original_height // self.downsample_factor

        # Resize depth image
        downsampled_depth = cv.resize(
            depth_image, (new_width, new_height), interpolation=cv.INTER_NEAREST
        )

        # Scale the intrinsic parameters
        self.camera_intrinsics["fx"] /= self.downsample_factor
        self.camera_intrinsics["fy"] /= self.downsample_factor
        self.camera_intrinsics["cx"] /= self.downsample_factor
        self.camera_intrinsics["cy"] /= self.downsample_factor

        return downsampled_depth
    

    def process(self):
        # print(f'Bounding box: {self.bounding_box}')
        # print(f'Depth: {self.depth_image}')
        # print(f'Camera: {self.camera_intrinsics}')
        #print(f'PC: {self.pointcloud}')
        if self.bounding_box is None or self.depth_image is None or self.camera_intrinsics is None or self.pointcloud is None:
            self.get_logger().warn("Waiting for all data to be available...")
            return

        # Unpack bounding box
        bounding_boxes = self.bounding_box.reshape((self.num_predictions, 4))
        # print(bounding_boxes[0])
        x_min, y_min, x_max, y_max = bounding_boxes[0]
        

        # Crop depth image
        cropped_depth = self.depth_image[y_min:y_max, x_min:x_max]
        cropped_depth = self.downsample_depth_image(cropped_depth)
        # print(cropped_depth.shape)

        # Convert 2D image coordinates to 3D point cloud indices
        indices = np.indices((cropped_depth.shape[0], cropped_depth.shape[1]))
        # print(indices.shape)
        u = indices[1] + x_min  # Add offset for cropped region
        v = indices[0] + y_min
        depth = cropped_depth.flatten()
        # print(len(u))
        # print(len(v))
        # print(len(depth))

        # Intrinsics
        fx = self.camera_intrinsics["fx"]
        fy = self.camera_intrinsics["fy"]
        cx = self.camera_intrinsics["cx"]
        cy = self.camera_intrinsics["cy"]

        # Compute 3D points from depth
        z = depth
        x = (u.flatten() - cx) * z / fx
        y = (v.flatten() - cy) * z / fy

        # Create mask for valid depth
        mask = z > 0
        x, y, z = x[mask], y[mask], z[mask]
        # print(f'x is {len(x)}')
        # print(f'y is {len(y)}')
        # print(f'y is {len(z)}')



        self.get_logger().info(f"Extracting points!")

        # # Build KD-Tree for the full point cloud
        # pointcloud_array = np.array(pc2.read_points(self.pointcloud, skip_nans=True))
        # print(pointcloud_array)
        # kdtree = KDTree(pointcloud_array[:, :3])

        # Query points from cropped depth in KD-Tree
        query_points = np.stack((x, y, z), axis=-1)
        num_samples = int(len(query_points) * 0.01)
        indices = np.random.choice(len(query_points), num_samples, replace=False)

        # Select the corresponding points
        selected_points = [query_points[i] for i in indices]
        distances, indices = self.pointcloud_kd_tree.query(selected_points, k=1,distance_upper_bound=0.001)

        # Filter valid indices and construct the new point cloud
        valid_indices = indices[distances < np.inf]
        extracted_points = self.pointcloud[valid_indices]
        extracted_rgb = self.pc_rgb[valid_indices]


        # # Crop the full point cloud based on extracted 3D points
        # extracted_points = []
        # for point in tqdm(pc2.read_points(self.pointcloud, skip_nans=True)):
        #     if any(np.isclose([point[0], point[1], point[2]], [x, y, z], atol=0.01).all() for x, y, z in zip(x, y, z)):
        #         extracted_points.append(point)

        # Publish or process extracted points (e.g., save to file)
        self.get_logger().info(f"Extracted {len(extracted_points)} points from the bounding box.")
        #print(extracted_points)
        self.get_logger().info(f"Extracted {len(extracted_rgb)} points from the rbg.")
        #print(extracted_rgb)


        transform = self.get_transform("world", "camera_link_optical")

        transformed_points = []
        # Transform points to the world frame
        # walk through list of points and transform each point one by one
        for x, y, z in extracted_points:

            pt = Point()
            pt.x, pt.y, pt.z = float(x), float(y), float(z)

            new_pt = self.transform_point(transform, pt)
            transformed_points.append((new_pt.x, new_pt.y, new_pt.z))        


        # transform the entire view
        transformed_full = []
        for x, y, z in self.pointcloud:

            pt = Point()
            pt.x, pt.y, pt.z = float(x), float(y), float(z)

            new_pt = self.transform_point(transform, pt)
            transformed_full.append((new_pt.x, new_pt.y, new_pt.z))   
        


        points = []  # List to store the merged points

        # Iterate through both lists and merge them
        for (x, y, z), (r, g, b) in zip(transformed_points, extracted_rgb):
            # Convert RGB values to a 32-bit integer
            # rgb = struct.unpack('I', struct.pack('BBBB', b, g, r, 1))[0]  # Pack RGB into an integer

            rgb = int(r) << 16 | int(g) << 8 | int(b)
            pt = [x, y, z, rgb]  # Create a point with (x, y, z, rgb)
            points.append(pt)  # Add the point to the list      

        header = Header()
        header.frame_id = 'world'

        fields = [
            PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
            PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
            PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
            PointField(name='rgb', offset=12, datatype=PointField.UINT32, count=1)
        ]
        extraction = pc2.create_cloud(header,fields,points)

        # point_cloud = o3d.geometry.PointCloud()
        # point_cloud.points = o3d.utility.Vector3dVector(np.array(transformed_full))
        # o3d.io.write_point_cloud("output_full.pcd", point_cloud)
        # self.get_logger().info("Saved")
        # self.break_flag_ = True



        # # Convert the data to a sensor pointcloud
        # cloud = PointCloud2()
        # cloud.header.stamp = self.get_clock().now().to_msg()
        # cloud.header.frame_id = 'world'

        # cloud.fields = [
        #     PointField(name='x', offset=0, datatype=PointField.FLOAT32, count=1),
        #     PointField(name='y', offset=4, datatype=PointField.FLOAT32, count=1),
        #     PointField(name='z', offset=8, datatype=PointField.FLOAT32, count=1),
        #     PointField(name='rgb', offset=12, datatype=PointField.UINT32, count=1)
        # ]

        # cloud.data = points.tobytes()
        # cloud.width = points.shape[0]
        # cloud.height = 1
        # cloud.is_bigendian = False
        # cloud.point_step = 12 # size of each point in bytes
        # cloud.row_step = cloud.point_step*cloud.width

        self.extracted_pointcloud_pub.publish(extraction)



def main(args=None):
    rclpy.init(args=args)

    pc_seg = PointCloudExtractor()

    spin_thread = Thread(target=rclpy.spin, args=(pc_seg,), daemon=True)
    spin_thread.start()

    rate = pc_seg.create_rate(10)

    try:
        while rclpy.ok() and pc_seg.break_flag_ == False:
            pc_seg.process()
            #pc_seg.get_logger().info("Inside loop")

            rate.sleep()

    except KeyboardInterrupt:
        pass



    # Destroy the node explicitly
    # (optional - otherwise it will be done automatically
    # when the garbage collector destroys the node object)
    pc_seg.destroy_node()
    rclpy.shutdown()
    spin_thread.join()


if __name__ == '__main__':
    main()