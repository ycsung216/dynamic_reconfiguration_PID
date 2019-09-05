# dynamic_reconfiguration_PID
A ROS package implementing dynamical parameter reconfiguration. The parameters are Kp, Ki, and Kd for a PID controller.

Parameters that can be reconfigurated dynamically are written in Python in config.cfg within cfg folder.
Dynamical configuration server is implemented in the cpp file: src/server.cpp.

Steps:
1. Download dynamic_conf_PID folder to your src folder under catkin workspace. In dynamic_conf_PID/cfg folder, run $ chmod a+x config.cfg.
2. run $ catkin_make
Run Step 3~5 in respective terminals:
3. $ roscore
4. $ rosrun dynamic_conf_PID dynamic_reconfigure_node
5. $ rosrun rqt_reconfigure rqt_reconfigure


You should see a dynamic reconfiguration gui in the terminal that runs Step 5.
