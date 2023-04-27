# MAS-418-OBLIG-3-Group-7
This is a project for MAS414 subject for Mechatronics Master at UiA. The project implement control of a crane simulated in TwinCAT through ROS2. Beckoff ADS is used for making the connection. 




The repo contains the TwinCAT model, ROS2 workspace and two videos (one for Auto and one for Manual mode presentation).

Twincat: 
Is the model provided by Daniel Hagen (Lab5), with a modified main which includes the variables needed for communication and some if statements for the auto-manual mode and setting the reference position, as well as starting the system. The HMI and simulator variables were used for controlling the crane in TwinCAT. In addition the piston and rod positions, and the boomAngle are being sent to ROS via ADS.

ROS2:
The system is initiated via the launch file found in the crane_visualization package “crane_visualization.launch.py” 

The workspace provided by Kristian Muri for the Green crane was used, we created our own URDF file during oblig 1 which was identical to the solution.  The main program controlling the crane is the ads_node.cpp which is found inside the “ads_example_package” package. 
The ads_node was modified to include a publisher and some functionality to send the variables received by ADS from twincat to the topic /joint_states directly.
The joint_state_publisher, ads_example_package and xacro packages have been added to the workspace in order to run the crane in rviz by using the crane_visualization package.  
The launch file was modified to exclude the joint_state_publisher_gui, and include the ads_node program instead. 

AUTO/MANUAL mode:
I was not sure what was meant by “manual” and “auto” mode so the following functionality was implemented:
MANUAL: the crane is controlled by the joystick in the HMI while having the simulator open (it wont work if the simulator is not running) – no reference position is sent by ROS2
AUTO: the reference position is set in ROS2 and sent to twinCAT which starts to move the crane to the position once the program starts.

The two videos show the Manual and Auto Mode.



