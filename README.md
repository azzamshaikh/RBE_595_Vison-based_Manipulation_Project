# RBE_595_Group_Project

## YCB Models
To load the YCB models, copy all the models from the `gazebo_ycb/models/` folder to your local `~/.gazebo/models` folder.

## Launch Simulation
In a terminal, build and source the workspace and run
```
ros2 launch panda_ros2_moveit2 panda_interface.launch.py
```
This will launch Gazebo and spawn all objects and controllers. RVIZ will also open.

## Launch Object Perception
In a new terminal, source the workspace and run
```
ros2 launch pcl_transform object_perception.launch.py
```
This will launch YOLO and add pointcloud data to RVIZ.

## Launch Sequencer Supporting Services
In a new terminal, source the workspace and run
```
ros2 launch sequencer supporting_services.launch.py enable_capgrasp:=LOOK_AT_DESCRIPTION_BELOW
```
enable_capgrasp choices are true or false

This will launch the robot controller, grasping attacher node, and CAPGrasp service server.

## Launch Sequencer State Machine
In a new terminal, source the workspace and run
```
ros2 launch sequencer sequencer_client.launch.py grasp_type:=LOOK_AT_DESCRIPTION_BELOW
```
grasp_type choices are:
- grasp_type:=default
- grasp_type:=capgrasp
- grasp_type:=ggcnn

This will launch the state machine with the appropriate grasp service.
