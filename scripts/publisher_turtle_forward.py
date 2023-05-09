#! /usr/bin/env python3

import rospy            # import the python library
from geometry_msgs.msg import Twist 

rospy.init_node('publisher_node_turtle_forward')
pub = rospy.Publisher('turtle/cmd_vel', Twist, queue_size=10)
rate = rospy.Rate(2)
var = Twist()
var.linear.x = 0.5
var.linear.y=0.0
var.linear.z=0.0

var.angular.x= 0.0
var.angular.y= 0.0
var.angular.z= 0.0

while not rospy.is_shutdown(): 
  pub.publish(var)
  rate.sleep()