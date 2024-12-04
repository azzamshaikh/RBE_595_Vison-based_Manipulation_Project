import rclpy
from rclpy.node import Node
import os
import cv2
import matplotlib.pyplot as plt 
import numpy as np
import torch
from skimage.filters import gaussian
from sensor_msgs.msg import Image, CameraInfo
from std_msgs.msg import Float32MultiArray, Int32MultiArray
from cv_bridge import CvBridge
from ament_index_python.packages import get_package_share_directory
from ggcnn_ros2.ggcnn2 import GGCNN
import tf2_ros
from geometry_msgs.msg import TransformStamped
import transforms3d

bridge = CvBridge()

def plot_fancy_heatmaps(q_img, title):

    plt.figure(figsize=(5, 5))
    im = plt.imshow(q_img, cmap='jet', interpolation='nearest')

    plt.colorbar(im)
    
    plt.title(title)
    plt.axis('off')
    
    plt.show()

def plot_rectangle_on_image(image, grasp_x, grasp_y, angle, grasp_width):

    grasp_display = image.copy()
    
    # Calculate half dimensions of the rectangle
    half_length = grasp_width / 2
    half_width = half_length / 2

    # Define the 4 corners of the rectangle before rotation
    corners = np.array([
        [-half_length, -half_width],
        [-half_length, half_width],
        [half_length, half_width],
        [half_length, -half_width]
    ])

    # Calculate the rotation matrix
    cos_angle = np.cos(-angle)
    sin_angle = np.sin(-angle)
    rotation_matrix = np.array([
        [cos_angle, -sin_angle],
        [sin_angle, cos_angle]
    ])

    # Rotate the corners
    rotated_corners = np.dot(corners, rotation_matrix.T)
    rotated_corners[:, 0] += grasp_x
    rotated_corners[:, 1] += grasp_y

    # Draw the rectangle
    cv2.line(grasp_display, (int(rotated_corners[0, 0]), int(rotated_corners[0, 1])), (int(rotated_corners[1, 0]), int(rotated_corners[1, 1])), (0, 255, 0), 2)
    cv2.line(grasp_display, (int(rotated_corners[1, 0]), int(rotated_corners[1, 1])), (int(rotated_corners[2, 0]), int(rotated_corners[2, 1])), (0, 255, 0), 2)
    cv2.line(grasp_display, (int(rotated_corners[2, 0]), int(rotated_corners[2, 1])), (int(rotated_corners[3, 0]), int(rotated_corners[3, 1])), (0, 255, 0), 2)
    cv2.line(grasp_display, (int(rotated_corners[3, 0]), int(rotated_corners[3, 1])), (int(rotated_corners[0, 0]), int(rotated_corners[0, 1])), (0, 255, 0), 2)
    cv2.circle(grasp_display, (grasp_x, grasp_y), 3, (0, 255, 0), -1)

    return grasp_display

    

    cv2.imshow("Grasp Rectangle", grasp_display)

class GGCNNGraspNode(Node):
    def __init__(self):
        super().__init__('ggcnn_grasp_node')
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        self.subscription = self.create_subscription(
            Int32MultiArray,
            '/yolo/prediction/bbox',
            self.bbox_callback,
            10
        )

        self.model = GGCNN()
        package_share_directory = get_package_share_directory('ggcnn_ros2')
        model_path = os.path.join(package_share_directory, 'models', 'ggcnn_epoch_23_cornell_statedict.pt')
        self.model.load_state_dict(torch.load(model_path))
        self.model.eval()

        # Initialize intrinsics and flag
        self.fx = self.fy = self.cx = self.cy = None
        self.image_width = self.image_height = None
        self.intrinsics_initialized = False  # Flag for intrinsics initialization

        # ROS Publishers and Subscribers
        self.grasp_pub = self.create_publisher(Float32MultiArray, 'ggcnn/out/command', 10)
        self.depth_sub = self.create_subscription(Image, '/realsense/depth/image_raw', self.depth_image_callback, 10)
        self.camera_info_sub = self.create_subscription(CameraInfo, '/realsense/camera_info', self.camera_info_callback, 10)
        self.bbox = None

    def bbox_callback(self, msg):
        data = msg.data
        if len(data) >= 4:
            self.bbox = (int(data[0]), int(data[1]), int(data[2]), int(data[3]))
            self.get_logger().info(f"Received bounding box: {self.bbox}")

    def transform_to_matrix(self, transform):
        translation = transform.transform.translation
        rotation = transform.transform.rotation
        t_matrix = np.eye(4)
        t_matrix[0, 3] = translation.x
        t_matrix[1, 3] = translation.y
        t_matrix[2, 3] = translation.z
        q = [rotation.w, rotation.x, rotation.y, rotation.z]  # Note the order of quaternion elements
        t_matrix[:3, :3] = transforms3d.quaternions.quat2mat(q)
        return t_matrix

    def get_patch(self, depth_image, bbox):

        min_x, min_y, max_x, max_y = bbox
        center_x = (min_x + max_x) // 2
        center_y = (min_y + max_y) // 2

        top_left_x = center_x - 150
        top_left_y = center_y - 150

        if top_left_x < 0:
            top_left_x = 0
        elif top_left_x + 300 > depth_image.shape[1]:
            top_left_x = depth_image.shape[1] - 300

        if top_left_y < 0:
            top_left_y = 0
        elif top_left_y + 300 > depth_image.shape[0]:
            top_left_y = depth_image.shape[0] - 300

        top_left_x = max(0, min(top_left_x, depth_image.shape[1] - 300))
        top_left_y = max(0, min(top_left_y, depth_image.shape[0] - 300))

        depth_crop = depth_image[top_left_y:top_left_y + 300, top_left_x:top_left_x + 300]
        # new_bbox = (min_x - top_left_x, min_y - top_left_y, max_x - top_left_x, max_y - top_left_y)

        return depth_crop, (top_left_x, top_left_y)


    def camera_info_callback(self, camera_info_msg):
        """Get camera intrinsics."""
        self.fx = camera_info_msg.k[0]  # Focal length x
        self.fy = camera_info_msg.k[4]  # Focal length y
        self.cx = camera_info_msg.k[2]  # Principal point x
        self.cy = camera_info_msg.k[5]  # Principal point y

        # Estimate image width and height if not directly available
        self.image_width = int(self.cx * 2) if self.cx else 640
        self.image_height = int(self.cy * 2) if self.cy else 480

        print(f"Estimated image size: {self.image_width}x{self.image_height}")
        
        # Set the intrinsics flag and unsubscribe
        self.intrinsics_initialized = True
        self.destroy_subscription(self.camera_info_sub)


    def depth_image_callback(self, depth_msg):
        if not self.intrinsics_initialized:
            print("Camera intrinsics not yet initialized.")
            return
        
        if self.bbox is None:
            print("Bounding box not yet received.")
            return

        # Convert depth image from ROS message to numpy array
        depth_image = bridge.imgmsg_to_cv2(depth_msg, desired_encoding='passthrough')

        # Preprocess depth image: Crop and resize to match the model input size (300x300)
        # crop_size = 400
        # depth_crop = depth_image[
        #     (depth_image.shape[0] - crop_size) // 2 : (depth_image.shape[0] + crop_size) // 2,
        #     (depth_image.shape[1] - crop_size) // 2 : (depth_image.shape[1] + crop_size) // 2,
        # ]

        #take the bounding box center and crop 300x300 around it

        depth_crop, updated_top_corner = self.get_patch(depth_image, self.bbox)

        depth_resized = cv2.resize(depth_crop, (300, 300))
        #normalize depth image
        # depth_resized = cv2.normalize(depth_resized, None, 0, 1, cv2.NORM_MINMAX)
        # Model inference
        depth_resized = self.process_depth_image(depth_resized)
        # depth_resized = np.clip(depth_resized - depth_resized.mean(), -1, 1)
        #all values between -1 to 1 usoing cv2
        depth_resized = cv2.normalize(depth_resized, None, -1, 1, cv2.NORM_MINMAX)

        print(depth_resized.min(), depth_resized.max()) 

        depth_tensor = torch.tensor(depth_resized, dtype=torch.float32).unsqueeze(0).unsqueeze(0)
        with torch.no_grad():
            pos_output, cos_output, sin_output, width_output = self.model(depth_tensor)

        # Post-process model outputs
        q_img, ang_img, width_img = self.post_process_output(pos_output, cos_output, sin_output, width_output)
        print(q_img.min(), q_img.max())
        # Calculate grasp location and width
        # bounding_boxes = [(228, 54, 259, 128), (9, 87, 40, 126), (230, 195, 268, 250), (29, 215, 45, 245)]
        # for bounding_box in bounding_boxes:
        new_bbox = (self.bbox[0] - updated_top_corner[0], self.bbox[1] - updated_top_corner[1], self.bbox[2] - updated_top_corner[0], self.bbox[3] - updated_top_corner[1])
        grasp_x, grasp_y, angle, grasp_width = self.calculate_grasp(q_img, ang_img, width_img, new_bbox)

        # Check bounds and get depth at grasp point
        if not (0 <= grasp_x < 300 and 0 <= grasp_y < 300):
            print("Warning: Grasp coordinates are out of depth image bounds.")
            return
        
        # point_depth = depth_resized[grasp_y, grasp_x]
        # if point_depth == 0:
        #     print("Warning: Invalid depth at grasp point.")
        #     return

        grasp_x += updated_top_corner[0]
        grasp_y += updated_top_corner[1]
        point_depth = depth_image[grasp_y, grasp_x]
        # Convert to 3D real-world coordinates
        x = (grasp_x - self.cx) / self.fx * point_depth
        y = (grasp_y - self.cy) / self.fy * point_depth
        z = point_depth
        self.show_grasp_on_image(depth_image, grasp_x, grasp_y, angle, grasp_width)

        #now transform grasp point to world frame
    #     grasp_point = np.array([x, y, z, 1])
    #     t_matrix = np.eye(4)
    #     # t_matrix = np.linalg.inv(self.camera_transformation_matrix)
    #     # t_matrix = self.
    # #     t_matrix = np.array([
    # #     [0.001, -1.000, 0.000, 0.000],
    # #     [0.825, 0.001, 0.565, 0.000],
    # #     [-0.565, 0.000, 0.825, 1.350],
    # #     [0.000, 0.000, 0.000, 1.000]
    # # ])
    #     # t_matrix = np.linalg.inv(t_matrix)  
    #     world_grasp_point = np.dot(t_matrix, grasp_point)
    #     world_grasp_point = world_grasp_point.astype(float)
    #     angle = float(angle)
    #     grasp_width = float(grasp_width)

    #     # Publish grasp data
    #     cmd_msg = Float32MultiArray()
    #     # cmd_msg data should have 6d pose along with width
    #     cmd_msg.data = [world_grasp_point[0], world_grasp_point[1], world_grasp_point[2], angle, 0.0, 0.0, grasp_width]
    #     self.grasp_pub.publish(cmd_msg)

        try:
            print(f"Grasp point in camera frame: ({x}, {y}, {z})")
            transform = self.tf_buffer.lookup_transform('world', 'camera_link_optical', rclpy.time.Time())
            grasp_point = np.array([x, y, z, 1])
            t_matrix = self.transform_to_matrix(transform)
            world_grasp_point = np.dot(t_matrix, grasp_point)
            print(f"Grasp point in world frame: {world_grasp_point}")

            # Ensure all values are floats and within the valid range
            world_grasp_point = world_grasp_point.astype(float)
            angle = float(angle)
            grasp_width = float(grasp_width)

            # Publish grasp data
            cmd_msg = Float32MultiArray()
            # cmd_msg data should have 6d pose along with width
            cmd_msg.data = [world_grasp_point[0], world_grasp_point[1], world_grasp_point[2], angle, 0.0, 0.0, grasp_width]
            self.grasp_pub.publish(cmd_msg)
        except tf2_ros.LookupException as e:
            self.get_logger().error(f"Transform lookup failed: {e}")
        except tf2_ros.ExtrapolationException as e:
            self.get_logger().error(f"Transform extrapolation failed: {e}")

    def process_depth_image(self, depth, out_size=300, return_mask=False, crop_y_offset=0):
        
        depth_crop = depth.copy()
        depth_crop = cv2.copyMakeBorder(depth_crop, 1, 1, 1, 1, cv2.BORDER_DEFAULT)
        depth_nan_mask = np.isnan(depth_crop).astype(np.uint8)

        kernel = np.ones((3, 3),np.uint8)
        depth_nan_mask = cv2.dilate(depth_nan_mask, kernel, iterations=1)

        depth_crop[depth_nan_mask==1] = 0
        depth_scale = np.abs(depth_crop).max()
        depth_crop = depth_crop.astype(np.float32) / depth_scale 

        depth_crop = cv2.inpaint(depth_crop, depth_nan_mask, 1, cv2.INPAINT_NS)

        depth_crop = depth_crop[1:-1, 1:-1]
        depth_crop = depth_crop * depth_scale

        return depth_crop

    def post_process_output(self, q_img, cos_img, sin_img, width_img):
        q_img = q_img.cpu().numpy().squeeze()
        ang_img = (torch.atan2(sin_img, cos_img) / 2.0).cpu().numpy().squeeze()
        width_img = width_img.cpu().numpy().squeeze()  # Adjust scaling factor

        width_img = np.clip(width_img, 0, 1) * 150.0
        ang_img = np.clip(ang_img, -np.pi / 2.0, np.pi / 2.0)

        # Apply Gaussian smoothing
        q_img = gaussian(q_img, 2.0, preserve_range=True)
        ang_img = gaussian(ang_img, 2.0, preserve_range=True)
        width_img = gaussian(width_img, 1.0, preserve_range=True)

        return q_img, ang_img, width_img

    def calculate_grasp(self, q_img, ang_img, width_img, bounding_box):
        # Only consider the center region of the image
        q_img_temp = q_img[bounding_box[1]:bounding_box[3], bounding_box[0]:2*(bounding_box[0] + bounding_box[2]) // 3]
        max_q_idx = np.unravel_index(np.argmax(q_img_temp), q_img_temp.shape)
        max_q_idx = (max_q_idx[0] + bounding_box[1], max_q_idx[1] + bounding_box[0])
        grasp_x, grasp_y = max_q_idx

        angle = ang_img[grasp_x, grasp_y]
        # #adjust grasp_width to be between 0 and 150, ajusting its min value to 0 and max to 150 and adjust everything else
        # min_width = width_img.min()
        # max_width = width_img.max()
        # width_img = (width_img - min_width) / (max_width - min_width) * 150
        grasp_width = width_img[grasp_x, grasp_y]
        
        # grasp_width = width_img[grasp_x, grasp_y]

        # # Adjust for initial cropping
        # crop_size = 400
        # crop_offset_x = (depth_image.shape[1] - crop_size) // 2
        # crop_offset_y = (depth_image.shape[0] - crop_size) // 2
        # grasp_x += crop_offset_x
        # grasp_y += crop_offset_y
        
        print(f"Grasp location: ({grasp_y}, {grasp_x})")
        print(f"Grasp angle: {angle}")
        print(f"Grasp width: {grasp_width}")

        plot_fancy_heatmaps(q_img, 'Q Image')
        plot_fancy_heatmaps(ang_img, 'Angle Image')
        plot_fancy_heatmaps(width_img, 'Width Image')
        return grasp_y, grasp_x, angle, grasp_width

    def show_grasp_on_image(self, depth_image, grasp_x, grasp_y, angle, grasp_width):
        
        grasp_display = plot_rectangle_on_image(depth_image, grasp_x, grasp_y, angle, grasp_width)

        #use matplotlib to display the image
        plt.imshow(grasp_display)
        plt.title("Grasp Rectangle")
        plt.axis('off')
        plt.show()


def main(args=None):
    rclpy.init(args=args)
    ggcnn_node = GGCNNGraspNode()
    rclpy.spin(ggcnn_node)
    ggcnn_node.destroy_node()
    rclpy.shutdown()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
