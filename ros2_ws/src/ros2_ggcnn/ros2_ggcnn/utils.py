import numpy as np
import cv2
import torch
from skimage.filters import gaussian
import transforms3d
import matplotlib.pyplot as plt

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

def show_grasp_on_image(depth_image, grasp_x, grasp_y, angle, grasp_width):
        
        grasp_display = plot_rectangle_on_image(depth_image, grasp_x, grasp_y, angle, grasp_width)

        plt.imshow(grasp_display)
        plt.title("Grasp Rectangle")
        plt.axis('off')
        plt.show()    

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
    #plot the cropped image
    plt.imshow(depth_crop)
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

def calculate_grasp(q_img, ang_img, width_img, bounding_box):
    # Only consider the center region of the image
    # q_img_temp = q_img[bounding_box[1]:bounding_box[3], bounding_box[0]:bounding_box[2]]
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

    # plot_fancy_heatmaps(q_img, 'Q Image')

    return grasp_y, grasp_x, angle, grasp_width
