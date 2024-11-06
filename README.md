# RBE_595_Group_Project

## Launch Simulation
In a terminal, build and source the workspace and run
```
ros2 launch panda_ros2_moveit2 panda_interface.launch.py
```

## Launch attacher action
In a new terminal, source the workspace and run
```
ros2 run ros2_grasping attacher_action.py
```

## Launch motion
In a new terminal, source the workspace and run
```
ros2 run ros2_execution ros2_execution.py --ros-args -p PROGRAM_FILENAME:="panda_test" -p ROBOT_MODEL:="panda" -p EE_MODEL:="panda_hand"
```
