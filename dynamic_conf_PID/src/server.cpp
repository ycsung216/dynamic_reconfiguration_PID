#include <ros/ros.h>

#include <dynamic_reconfigure/server.h>
#include <dynamic_conf_PID/configConfig.h>

void callback(dynamic_conf_PID::configConfig &config, uint32_t level) {
  ROS_INFO("Reconfigure Request: %f %f %f %s %d", 
            config.Kp, config.Ki, 
            config.Kd, 
            config.pid_enable?"True":"False", 
            config.plant_model);
}

int main(int argc, char **argv) 
{
    ros::init(argc, argv, "dynamic_conf_PID");

    dynamic_reconfigure::Server<dynamic_conf_PID::configConfig> server;
    dynamic_reconfigure::Server<dynamic_conf_PID::configConfig>::CallbackType f;

    f = boost::bind(&callback, _1, _2);
    server.setCallback(f);

    ROS_INFO("Spinning node");
    ros::spin();
    return 0;
}
