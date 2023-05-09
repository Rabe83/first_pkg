#! /usr/bin/env python3

import rospy            # import the python library
from std_msgs.msg import Int8 

rospy.init_node('publisher_node_twentyHundred')
pub = rospy.Publisher('TwentyHundred_topic', Int8, queue_size=10)
rate = rospy.Rate(2)
counter = Int8()
counter.data = 20

while not rospy.is_shutdown() and counter.data <= 100: 
  pub.publish(counter)
  print("The number is:",counter.data)
  counter.data += 1
  rate.sleep()