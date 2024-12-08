from launch import LaunchDescription
from launch.actions import DeclareLaunchArgument
from launch.conditions import IfCondition
from launch.substitutions import LaunchConfiguration
from launch_ros.actions import Node

def generate_launch_description():
    enable_capgrasp_arg = DeclareLaunchArgument(
        'enable_capgrasp',
        default_value='true',
        description='Enable or disable the capgrasp node. Set to "true" or "false".'
    )

    enable_ggcnn_arg = DeclareLaunchArgument(
        'enable_ggcnn',
        default_value='true',
        description='Enable or disable the ggcnn node. Set to "true" or "false".'
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

    ggcnn_srv = Node(
        package="ros2_ggcnn",
        executable="ggcnn_service_node",
        name="ggcnn_service_node",
        output="log",
        condition=IfCondition(LaunchConfiguration('enable_ggcnn'))
    )

    controller = Node(
        package="sequencer",
        executable="controller",
        name="controller_service",
        output="screen"
    )

    return LaunchDescription(
        [
            enable_capgrasp_arg,
            enable_ggcnn_arg,
            attacher,
            capgrasp_srv,
            ggcnn_srv,
            controller
        ]
    )