# GGCNN Service Node

## Step-by-Step Guide

1. Launch the `panda_interface`:
    ```bash
    ros2 launch panda_ros2_moveit2 panda_interface.launch.py
    ```

2. Open another terminal and run the YOLO object segmentation:
    ```bash
    ros2 run yolo object_segmentation
    ```

3. Open another terminal to launch the GGCNN service node:
    ```bash
    ros2 run ros2_ggcnn ggcnn_service_node
    ```

4. Open another terminal to call the `get_grasp` service with bounding box coordinates:
    ```bash
    ros2 service call /get_grasp custom_interfaces/srv/Grasp "{bbox_min_x: 1, bbox_min_y: 2, bbox_max_x: 3, bbox_max_y: 4}"
    ```

Replace `1, 2, 3, 4` with the actual values for `bbox_min_x`, `bbox_min_y`, `bbox_max_x`, and `bbox_max_y`.

## Example

Here is an example of how to call the service with specific bounding box coordinates:
```bash
ros2 service call /get_grasp custom_interfaces/srv/Grasp "{bbox_min_x: 10, bbox_min_y: 20, bbox_max_x: 30, bbox_max_y: 40}"