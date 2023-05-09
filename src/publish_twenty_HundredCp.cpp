#include "ros/ros.h"
#include "std_msgs/Int8.h"

int main(int argc, char** argv)
{
    ros::init(argc, argv, "publisher_node_twentyHundred");
    ros::NodeHandle n;
    ros::Publisher pub = n.advertise<std_msgs::Int8>("TwentyHundred_topic", 10);
    ros::Rate rate(2);
    std_msgs::Int8 counter;
    counter.data = 20;

    while (ros::ok() && counter.data <= 100) {
        pub.publish(counter);
        ROS_INFO("The number is: %d", counter.data);
        counter.data += 1;
        rate.sleep();
    }

    return 0;
}