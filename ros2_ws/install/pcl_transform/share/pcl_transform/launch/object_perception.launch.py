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


package_name = "pcl_transform"

def generate_launch_description():
    yolo = Node(
        package="yolo",
        executable="object_detection",
        name="yolo_node",
        output="screen"
    )

    downsample = Node(
        package=package_name,
        executable="downsample",
        name="downsample_node",
        output="screen"
    )

    object_seg = Node(
        package=package_name,
        executable="object_segmentation",
        name="object_segmentation",
        output="screen"
    )

    seg_processing = Node(
        package=package_name,
        executable="segmentation_process",
        name="segmentation_process",
        output="screen"
    )

    return LaunchDescription(
        [
            yolo,
            TimerAction(
                period=2.0,
                actions=[
                    downsample
                ]
            ),
            TimerAction(
                period=2.0,
                actions=[
                    object_seg
                ]
            ),
            TimerAction(
                period=2.0,
                actions=[
                    seg_processing
                ]
            )
        ]
    )
