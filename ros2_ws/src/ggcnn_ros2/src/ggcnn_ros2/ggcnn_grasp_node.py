import rclpy
from rclpy.node import Node
import os
import cv2
import numpy as np
import torch
from skimage.filters import gaussian
from sensor_msgs.msg import Image, CameraInfo
from std_msgs.msg import Float32MultiArray
from cv_bridge import CvBridge
from ament_index_python.packages import get_package_share_directory
from ggcnn_ros2.ggcnn2 import GGCNN

bridge = CvBridge()

class GGCNNGraspNode(Node):
    def __init__(self):
        super().__init__('ggcnn_grasp_node')

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

        # Convert depth image from ROS message to numpy array
        depth_image = bridge.imgmsg_to_cv2(depth_msg, desired_encoding='passthrough')

        # Preprocess depth image: Crop and resize to match the model input size (300x300)
        crop_size = 400
        depth_crop = depth_image[
            (depth_image.shape[0] - crop_size) // 2 : (depth_image.shape[0] + crop_size) // 2,
            (depth_image.shape[1] - crop_size) // 2 : (depth_image.shape[1] + crop_size) // 2,
        ]
        depth_resized = cv2.resize(depth_crop, (300, 300))

        # Model inference
        depth_tensor = torch.tensor(depth_resized, dtype=torch.float32).unsqueeze(0).unsqueeze(0)
        with torch.no_grad():
            pos_output, cos_output, sin_output, width_output = self.model(depth_tensor)

        # Post-process model outputs
        q_img, ang_img, width_img = self.post_process_output(pos_output, cos_output, sin_output, width_output)

        # Calculate grasp location and width
        grasp_x, grasp_y, angle, grasp_width = self.calculate_grasp(q_img, ang_img, width_img)

        # Check bounds and get depth at grasp point
        if not (0 <= grasp_x < 300 and 0 <= grasp_y < 300):
            print("Warning: Grasp coordinates are out of depth image bounds.")
            return
        point_depth = depth_resized[grasp_y, grasp_x]
        if point_depth == 0:
            print("Warning: Invalid depth at grasp point.")
            return

        # Convert to 3D real-world coordinates
        x = (grasp_x - self.cx) / self.fx * point_depth
        y = (grasp_y - self.cy) / self.fy * point_depth
        z = point_depth

        # Publish grasp data
        cmd_msg = Float32MultiArray()
        cmd_msg.data = [float(x), float(y), float(z), float(angle), float(grasp_width)]
        self.grasp_pub.publish(cmd_msg)
        self.show_grasp_on_image(depth_resized, grasp_x, grasp_y, angle, grasp_width)

    def post_process_output(self, q_img, cos_img, sin_img, width_img):
        q_img = q_img.cpu().numpy().squeeze()
        ang_img = (torch.atan2(sin_img, cos_img) / 2.0).cpu().numpy().squeeze()
        width_img = width_img.cpu().numpy().squeeze() * 1.0  # Adjust scaling factor

        # Apply Gaussian smoothing
        q_img = gaussian(q_img, 2.0, preserve_range=True)
        ang_img = gaussian(ang_img, 2.0, preserve_range=True)
        width_img = gaussian(width_img, 1.0, preserve_range=True)

        return q_img, ang_img, width_img

    def calculate_grasp(self, q_img, ang_img, width_img):
        max_q_idx = np.unravel_index(np.argmax(q_img), q_img.shape)
        grasp_x, grasp_y = max_q_idx
        angle = ang_img[grasp_x, grasp_y]
        grasp_width = width_img[grasp_x, grasp_y]
        
        print(f"Grasp location: ({grasp_x}, {grasp_y})")
        print(f"Grasp angle: {angle}")
        print(f"Grasp width: {grasp_width}")
        return grasp_x, grasp_y, angle, grasp_width

    def show_grasp_on_image(self, depth_image, grasp_x, grasp_y, angle, grasp_width):
        depth_display = cv2.normalize(depth_image, None, 0, 255, cv2.NORM_MINMAX).astype(np.uint8)
        half_width = grasp_width / 2
        dx = int(half_width * np.cos(angle))
        dy = int(half_width * np.sin(angle))

        # Define rectangle corners
        top_left = (grasp_x - dx, grasp_y - dy)
        top_right = (grasp_x + dx, grasp_y + dy)
        bottom_left = (grasp_x + dy, grasp_y - dx)
        bottom_right = (grasp_x - dy, grasp_y + dx)

        # Draw grasp rectangle and center point
        grasp_display = depth_display.copy()
        if all(0 <= pt[0] < 300 and 0 <= pt[1] < 300 for pt in [top_left, top_right, bottom_left, bottom_right]):
            cv2.line(grasp_display, top_left, top_right, (0, 255, 0), 2)
            cv2.line(grasp_display, top_right, bottom_right, (0, 255, 0), 2)
            cv2.line(grasp_display, bottom_right, bottom_left, (0, 255, 0), 2)
            cv2.line(grasp_display, bottom_left, top_left, (0, 255, 0), 2)
            cv2.circle(grasp_display, (grasp_x, grasp_y), 5, (0, 0, 255), -1)

        cv2.imshow("Depth Image with Grasp Rectangle", grasp_display)
        cv2.waitKey(1)

def main(args=None):
    rclpy.init(args=args)
    ggcnn_node = GGCNNGraspNode()
    rclpy.spin(ggcnn_node)
    ggcnn_node.destroy_node()
    rclpy.shutdown()
    cv2.destroyAllWindows()

if __name__ == '__main__':
    main()
