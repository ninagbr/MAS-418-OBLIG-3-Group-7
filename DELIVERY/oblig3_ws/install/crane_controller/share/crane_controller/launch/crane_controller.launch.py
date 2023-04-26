import launch
import launch.actions
import launch.substitutions
import launch_ros.actions


def generate_launch_description():
    return launch.LaunchDescription([
        launch.actions.DeclareLaunchArgument(
            'node_prefix',
            default_value=[launch.substitutions.EnvironmentVariable('USER'), '_'],
            description='Prefix for node names'),
        launch_ros.actions.Node(
            package='crane_controller', executable='motion_ref_generator', output='screen',
            name=[launch.substitutions.LaunchConfiguration('node_prefix'), 'motion_ref_generator']),
    ])