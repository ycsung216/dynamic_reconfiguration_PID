# dynamic_reconfiguration_PID
A ROS package implementing dynamical parameter reconfiguration. The parameters are Kp, Ki, and Kd for a PID controller.

Parameters that can be reconfigurated dynamically are writeen in Python in config.cfg within cfg folder.
Dynamical configuration server is implement in the cpp file: src/server.cpp.

Steps:
1. run $ catkin_make
Run Step 2~4 in respective terminals:
2. $ roscore
3. $ rosrun dynamic_conf_PID dynamic_reconfigure_node
4. $ rosrun rqt_reconfigure rqt_reconfigure
You should see a dynamic reconfiguration gui in the terminal that runs Step 4.
