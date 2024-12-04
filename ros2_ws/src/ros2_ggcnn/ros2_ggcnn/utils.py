import numpy as np
import cv2
import torch
from skimage.filters import gaussian
import transforms3d

def transform_to_matrix(transform):
    """Convert ROS transform to 4x4 transformation matrix."""
    translation = transform.transform.translation
    rotation = transform.transform.rotation
    t_matrix = np.eye(4)
    t_matrix[0, 3] = translation.x
    t_matrix[1, 3] = translation.y
    t_matrix[2, 3] = translation.z
    q = [rotation.w, rotation.x, rotation.y, rotation.z]  # Note the order of quaternion elements
    t_matrix[:3, :3] = transforms3d.quaternions.quat2mat(q)
    return t_matrix

def get_patch(depth_image, bbox):
    """Crop a 300x300 patch around the bounding box center."""
    min_x, min_y, max_x, max_y = bbox
    center_x = (min_x + max_x) // 2
    center_y = (min_y + max_y) // 2

    top_left_x = max(0, min(center_x - 150, depth_image.shape[1] - 300))
    top_left_y = max(0, min(center_y - 150, depth_image.shape[0] - 300))

    depth_crop = depth_image[top_left_y:top_left_y + 300, top_left_x:top_left_x + 300]
    return depth_crop, (top_left_x, top_left_y)

def process_depth_image(depth):
    """Process depth image for model input."""
    depth = cv2.copyMakeBorder(depth, 1, 1, 1, 1, cv2.BORDER_DEFAULT)
    depth_nan_mask = np.isnan(depth).astype(np.uint8)
    depth[depth_nan_mask == 1] = 0

    depth_scale = np.abs(depth).max()
    depth = depth.astype(np.float32) / depth_scale
    depth = cv2.inpaint(depth, depth_nan_mask, 1, cv2.INPAINT_NS)
    return depth[1:-1, 1:-1] * depth_scale

def post_process_output(q_img, cos_img, sin_img, width_img):
    """Post-process model outputs."""
    q_img = q_img.cpu().numpy().squeeze()
    ang_img = (torch.atan2(sin_img, cos_img) / 2.0).cpu().numpy().squeeze()
    width_img = width_img.cpu().numpy().squeeze() * 150.0  # Adjust scaling factor

    # Apply Gaussian smoothing
    q_img = gaussian(q_img, 2.0, preserve_range=True)
    ang_img = gaussian(ang_img, 2.0, preserve_range=True)
    width_img = gaussian(width_img, 1.0, preserve_range=True)

    return q_img, ang_img, width_img

def calculate_grasp(q_img, ang_img, width_img, bbox):
    """Calculate grasp location and width."""
    max_q_idx = np.unravel_index(np.argmax(q_img), q_img.shape)
    grasp_x, grasp_y = max_q_idx

    angle = ang_img[grasp_x, grasp_y]
    grasp_width = width_img[grasp_x, grasp_y]
    
    print(f"Grasp location: ({grasp_x}, {grasp_y})")
    print(f"Grasp angle: {angle}")
    print(f"Grasp width: {grasp_width}")

    return grasp_x, grasp_y, angle, grasp_width
