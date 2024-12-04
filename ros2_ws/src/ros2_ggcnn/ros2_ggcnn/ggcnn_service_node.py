import rclpy
from rclpy.node import Node
from sensor_msgs.msg import Image, CameraInfo
from cv_bridge import CvBridge
from ament_index_python.packages import get_package_share_directory
from ros2_ggcnn.ggcnn2 import GGCNN
from ros2_ggcnn.utils import transform_to_matrix, get_patch, process_depth_image, post_process_output, calculate_grasp
import sys, os
from custom_interfaces.srv import Grasp
import numpy as np
import torch
import tf2_ros

bridge = CvBridge()

class GGCNNServiceNode(Node):
    def __init__(self):
        super().__init__('ggcnn_service_node')
        
        # Initialize GGCNN model
        self.model = GGCNN()
        package_share_directory = get_package_share_directory('ros2_ggcnn')
        model_path = os.path.join(package_share_directory, 'models', 'ggcnn_epoch_23_cornell_statedict.pt')
        self.model.load_state_dict(torch.load(model_path))
        self.model.eval()

        # Initialize camera intrinsics
        self.fx = self.fy = self.cx = self.cy = None
        self.intrinsics_initialized = False
        self.depth_image = None

        # TF Buffer for transformations
        self.tf_buffer = tf2_ros.Buffer()
        self.tf_listener = tf2_ros.TransformListener(self.tf_buffer, self)

        # ROS Subscribers
        self.depth_sub = self.create_subscription(Image, '/realsense/depth/image_raw', self.depth_image_callback, 10)
        self.camera_info_sub = self.create_subscription(CameraInfo, '/realsense/camera_info', self.camera_info_callback, 10)

        # ROS Service
        self.srv = self.create_service(Grasp, 'get_grasp', self.handle_grasp_request)

    def camera_info_callback(self, camera_info_msg):
        """Initialize camera intrinsics."""
        self.fx = camera_info_msg.k[0]
        self.fy = camera_info_msg.k[4]
        self.cx = camera_info_msg.k[2]
        self.cy = camera_info_msg.k[5]
        self.intrinsics_initialized = True
        self.destroy_subscription(self.camera_info_sub)

    def depth_image_callback(self, depth_msg):
        """Update the current depth image."""
        self.depth_image = bridge.imgmsg_to_cv2(depth_msg, desired_encoding='passthrough')

    def handle_grasp_request(self, request, response):
        """Service callback to process bounding box and return grasp in 3D world coordinates."""
        if not self.intrinsics_initialized or self.depth_image is None:
            self.get_logger().error("Camera intrinsics or depth image not initialized.")
            return response

        bbox = (request.bbox_min_x, request.bbox_min_y, request.bbox_max_x, request.bbox_max_y)
        depth_crop, updated_top_corner = get_patch(self.depth_image, bbox)
        depth_resized = process_depth_image(depth_crop)

        # Model inference
        depth_tensor = torch.tensor(depth_resized, dtype=torch.float32).unsqueeze(0).unsqueeze(0)
        with torch.no_grad():
            pos_output, cos_output, sin_output, width_output = self.model(depth_tensor)

        q_img, ang_img, width_img = post_process_output(pos_output, cos_output, sin_output, width_output)
        grasp_x, grasp_y, angle, grasp_width = calculate_grasp(q_img, ang_img, width_img, bbox)

        grasp_x += updated_top_corner[0]
        grasp_y += updated_top_corner[1]
        point_depth = self.depth_image[grasp_y, grasp_x]

        if point_depth == 0:
            self.get_logger().error("Invalid depth at grasp point.")
            return response

        x = (grasp_x - self.cx) / self.fx * point_depth
        y = (grasp_y - self.cy) / self.fy * point_depth
        z = point_depth

        try:
            grasp_point = np.array([x, y, z, 1])
            transform = self.tf_buffer.lookup_transform('world', 'camera_link_optical', rclpy.time.Time())
            t_matrix = transform_to_matrix(transform)
            world_grasp_point = np.dot(t_matrix, grasp_point)

            response.x = float(world_grasp_point[0])
            response.y = float(world_grasp_point[1])
            response.z = float(world_grasp_point[2])
            response.angle = float(angle)
            response.width = float(grasp_width)

        except tf2_ros.LookupException as e:
            self.get_logger().error(f"Transform lookup failed: {e}")
        except tf2_ros.ExtrapolationException as e:
            self.get_logger().error(f"Transform extrapolation failed: {e}")

        return response

def main(args=None):
    rclpy.init(args=args)
    node = GGCNNServiceNode()
    rclpy.spin(node)
    node.destroy_node()
    rclpy.shutdown()

if __name__ == '__main__':
    main()
