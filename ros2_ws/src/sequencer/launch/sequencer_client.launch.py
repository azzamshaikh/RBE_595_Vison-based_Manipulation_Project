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

    grasp_type = DeclareLaunchArgument(
        'grasp_type',
        default_value='default',
        description='Define grasp type. Choices are "default", "capgrasp", "ggcnn".'
    )

    sequencer = Node(
        package="sequencer",
        executable="sequencer",
        name="sequence_client",
        output="screen",
        parameters=[
            {'grasp_type': LaunchConfiguration('grasp_type')}
        ]
    )


    return LaunchDescription(
        [
            grasp_type,
            sequencer,
        ]
    )
