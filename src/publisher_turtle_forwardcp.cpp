#include "ros/ros.h"
#include "geometry_msgs/Twist.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "publisher_node_turtle_forwardcp");
  ros::NodeHandle n;
  ros::Publisher pub = n.advertise<geometry_msgs::Twist>("turtle/cmd_vel", 10);
  ros::Rate rate(2);
  geometry_msgs::Twist var;
  var.linear.x = 0.5;
  var.linear.y = 0.0;
  var.linear.z = 0.0;
  var.angular.x = 0.0;
  var.angular.y = 0.0;
  var.angular.z = 0.0;

  while (ros::ok())
  {
    pub.publish(var);
    rate.sleep();
  }

  return 0;
}
