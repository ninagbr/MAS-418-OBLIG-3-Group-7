import os

from ament_index_python.packages import get_package_share_directory

from launch import LaunchDescription
from launch_ros.actions import Node
from launch.substitutions import Command, LaunchConfiguration
from launch.actions import DeclareLaunchArgument

from launch_ros.parameter_descriptions import ParameterValue



def generate_launch_description():
    rviz_config = os.path.join(
      get_package_share_directory('crane_visualization'),
      'rviz',
      'urdf.rviz'
      )

    crane_config = os.path.join(
      get_package_share_directory('crane_visualization'),
      'urdf',
      'green_crane.urdf'
      )

    model_arg = DeclareLaunchArgument(name='model', default_value=str(crane_config),
                                      description='Absolute path to robot urdf file')

    crane_description = ParameterValue(Command(['xacro ', LaunchConfiguration('model')]),
                                    value_type=str)                                  

    return LaunchDescription([

    model_arg,

        Node(
            package='robot_state_publisher',
            executable='robot_state_publisher',
            name='robot_state_publisher',
            output='screen',
            parameters=[{'robot_description': crane_description}]
        ),



        Node(
            package='rviz2',
            executable='rviz2',
            name='rviz2',
            arguments=['-d', rviz_config],
        ),
        
        

        Node(
            package='ads_example_package',
            executable='ads_node',
            name='adsnode',
            output='screen'
            )

    ])
