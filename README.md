# RBE 595 - Vision-based Robotic Manipulation Pipeline for Grocery Store Applications

This repo contains a ROS2 and Gazebo project developed for the RBE 595 group project.

### Abstract

In this repo, the development of a vision-based manipulation pipeline for grocery store applications was explored. This pipeline focuses on picking object from shelves. The developed pipeline includes the integration of an object perception stack, two grasping approaches (CAPGrasp and GGCNN), closed-loop controls, and an overarching state machine to control the overall system. We compare our two grasping approaches by conducting a series of picking trials with varying number of objects. We evaluate the success of these approaches to determine the better model for the objective of shelf picking. The results of our experiments show that CAPGrasp generates grasps for objects on a shelf with an 80% success rates - vs GGCNN's 35% - indicating that is the better approach for our application.

![](./docs/media/demo.gif)

A full write up of the project can be seen in the `docs` folder.

## Team Members

Azzam Shaikh, Chaitanya Gokule, Swati Shirke, Niranjan Kumar Ilampooranan, Alex Brattstrom

## Dependencies

### Packages 
This pipeline was developed in ROS2 Humble on Ubuntu 22.04. Gazebo Classic 11 is used for the simulation environment. 

This pipeline utilizes the following packages:
- IFRA Cranfield ROS2 Robot Simulation: A large portion of our project was built ontop of the simulation package provided by Cranfield University. Refer to the linked [IFRA Cranfield](https://github.com/IFRA-Cranfield/ros2_RobotSimulation/tree/humble) page to install the required dependencies.
- YOLO11: Refer to the linked [Ultralytics](https://github.com/ultralytics/ultralytics) page to install the required dependencies. 
- CAPGrasp: Refer to the linked [CAPGrasp](https://github.com/wengzehang/CAPGrasp) page to install the required dependencies. Note, certain lines in the package have been hardcoded to reference models. 
- GGCNN: Refer to the linked [GGCNN](https://github.com/dougsm/ggcnn) page to install the required dependencies. Note, certain lines in the package have been hardcoded to reference models.

Additional packages include:
- Point Cloud Library
- Open3D
- OpenCV
- python-statemachine

### YCB Models
To load the YCB models into Gazebo, copy all the models from the `gazebo_ycb/models/` folder to your local `~/.gazebo/models` folder.

## Running the Simulation

### Top Level Simulation
In a terminal, build and source the workspace and run
```
ros2 launch panda_ros2_moveit2 panda_interface.launch.py
```
This will launch Gazebo and spawn all objects and controllers. RVIZ will also open.

### Object Perception
In a new terminal, source the workspace and run
```
ros2 launch pcl_transform object_perception.launch.py
```
This will launch the YOLO object detection and add segmented point cloud data to RVIZ.

### Sequencer Supporting Services
In a new terminal, source the workspace and run
```
ros2 launch sequencer supporting_services.launch.py enable_capgrasp:=LOOK_AT_DESCRIPTION_BELOW enable_ggcnn:=LOOK_AT_DESCRIPTION_BELOW
```
enable_capgrasp choices are true or false
enable_ggcnn choices are true or false
Choose the grasping model of choice and set one to true and the other to false.

This will launch the robot controller service, grasping attacher node, and either the CAPGrasp or GGCNN service server.

### Sequencer State Machine
In a new terminal, source the workspace and run
```
ros2 launch sequencer sequencer_client.launch.py grasp_type:=LOOK_AT_DESCRIPTION_BELOW
```
grasp_type choices are:
- grasp_type:=default
- grasp_type:=capgrasp
- grasp_type:=ggcnn

This will launch the state machine with the appropriate grasp service.
