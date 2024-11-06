## Getting Started

All packages in this repository have been developed, executed and tested in an Ubuntu 22.04 machine with ROS2.0 Humble. Please find below all the required steps to set-up a ROS2.0 Humble environment in Ubuntu and install the Robot Simulation packages.

### ROS2.0 Humble Environment Set-Up

1. Install ROS2.0 Humble: 
    * Follow instructions in: [ROS2 Humble Tutorials - Installation](https://docs.ros.org/en/humble/Installation/Ubuntu-Install-Debians.html)
    * Source the ROS2.0 Humble installation in the .bashrc file (hidden file in /home):
        ```sh
        source opt/ros/humble/setup.bash
        ```

2. Install MoveIt!2 for ROS2 Humble:
    * Reference: [MoveIt!2 Humble](https://moveit.picknik.ai/humble/index.html)
    * Command for [binary install](https://moveit.ros.org/install-moveit2/binary):
        ```sh
        sudo apt install ros-humble-moveit
        # Binaries are recommended for a cleaner MoveIt!2 install and usage.
        ```        
3. Install ROS2 packages, which are required to launch ROS2 Robot Simulation and Control environments:
    * ROS2 Control:
        ```sh
        sudo apt install ros-humble-ros2-control
        ```
    * ROS2 Controllers:
        ```sh
        sudo apt install ros-humble-ros2-controllers
        sudo apt install ros-humble-gripper-controllers
        ```
    * Gazebo-ROS2:
        ```sh
        sudo apt install gazebo
        sudo apt install ros-humble-gazebo-ros2-control
        sudo apt install ros-humble-gazebo-ros-pkgs
        ```
    * xacro:
        ```sh
        sudo apt install ros-humble-xacro
        ```
    * Fix cycle time issues in humble-moveit (temporary fix):
        ```sh
        sudo apt install ros-humble-rmw-cyclonedds-cpp
        Add into .bashrc file -> export RMW_IMPLEMENTATION=rmw_cyclonedds_cpp
        ```

4. A small improvement of the move_group_interface.h file has been developed in order to execute the Robot/Gripper triggers in this repository. Both the upgraded file and the instructions of how to implement it can be found here: [move_group_interface_improved.h](https://github.com/IFRA-Cranfield/ros2_RobotSimulation/tree/humble/include)

5. Installation:
    ```sh
    cd ~/dev_ws/src
    git clone https://github.com/IFRA-Cranfield/ros2_RobotSimulation.git -b humble
    cd ~/dev_ws/
    colcon build
    source install/setup.bash
    ```

Note: If specifically face the issue that the robot is spawned and it does not stay upright, the refer to the following issues thread: [CONTROLLER MANAGER NOT AVAILABLE]("https://github.com/IFRA-Cranfield/ros2_RobotSimulation/issues/26")

### Launching the Robot Simulation

1. Launch the Robot Simulation:
    ```sh
    ros2 launch panda_ros2_moveit2 panda_interface.launch.py
    ```
    * The Robot Simulation will be launched in Gazebo and Rviz.

2. Move the Robot:
    * Open a new terminal and source the ROS2 environment:
        ```sh
        ros2 action send_goal -f /MoveXYZ ros2_data/action/MoveXYZ "{positionx: 0.4, positiony: 0.2, positionz: 0.6, speed: 2.0}"
        ```
    * The robot will move to the desired position and orientation.

3. Move the Gripper:
    * Open a new terminal and source the ROS2 environment:
        ```sh
        ros2 action send_goal -f /MoveG ros2_data/action/MoveG "{goal: 0.04}"
        ```
    * The gripper will move to the desired position.



References:
Refer to the following repositories for more information:
* [ros2_RobotSimulation](https://github.com/IFRA-Cranfield/ros2_RobotSimulation)

The above simulation has is based of IFRA (Intelligent Flexible Robotics and Assembly) Group, CRANFIELD UNIVERSITY. Heaavily rely on the above repository for erros and issues.



