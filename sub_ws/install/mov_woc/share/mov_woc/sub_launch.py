from launch import LaunchDescription
from launch_ros.actions import Node

def generate_launch_description():
    return LaunchDescription([
        Node(
            package='mov_woc',
            executable='conversor'
        ),
        Node(
            package='joy',
            executable='joy_node'
        )
    ])