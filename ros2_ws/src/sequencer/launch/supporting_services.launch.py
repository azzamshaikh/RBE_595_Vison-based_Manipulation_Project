import os
from ament_index_python.packages import get_package_share_directory
from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import LaunchConfiguration, Command
from launch.actions import ExecuteProcess, IncludeLaunchDescription, RegisterEventHandler, DeclareLaunchArgument, TimerAction
from launch.conditions import IfCondition, UnlessCondition
from launch.event_handlers import OnProcessExit
from launch.launch_description_sources import PythonLaunchDescriptionSource
import xacro
import yaml


def generate_launch_description():
    enable_node_arg = DeclareLaunchArgument(
        'enable_capgrasp',
        default_value='true',  # Default is false
        description='Enable or disable the node. Set to "true" or "false".'
    )

    attacher = Node(
        package="ros2_grasping",
        executable="attacher_action.py",
        name="attacher",
        output="log"
    )

    capgrasp_srv = Node(
        package="capgrasp_srv_cli",
        executable="grasp_service",
        name="grasp_service",
        output="log",
        condition=IfCondition(LaunchConfiguration('enable_capgrasp'))
    )

    controller = Node(
        package="sequencer",
        executable="controller",
        name="controller_service",
        output="screen"
    )


    return LaunchDescription(
        [
            enable_node_arg,
            attacher,
            capgrasp_srv,
            controller
        ]
    )
