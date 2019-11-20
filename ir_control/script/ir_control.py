#!/usr/bin/env python

import math
import rospy
from geometry_msgs.msg import Twist
from std_msgs.msg import String

ROTATE_V_ANG = 90

FORWARD_SPEED = 5
LEFT_SPEED    = 5
RIGHT_SPEED   = -5

def Rotate(x, y, theta):
  _x = x*math.cos(math.radians(theta)) - y*math.sin(math.radians(theta))
  _y = x*math.sin(math.radians(theta)) + y*math.cos(math.radians(theta))
  return _x, _y

def ir_callback(d):
  pub = rospy.Publisher('motion/cmd_vel', Twist, queue_size=1)
  msg = Twist()
  if (d.data == "CENTER"):
    x   = FORWARD_SPEED
    y   = 0
    z  = 0
  if (d.data == "CENTER_RIGHT"):
    x   = FORWARD_SPEED
    y   = RIGHT_SPEED
    z  = 0
  if (d.data == "CENTER_LEFT"):
    x   = FORWARD_SPEED
    y   = LEFT_SPEED
    z  = 0
  if (d.data == "RIGHT"):
    x   = 0
    y   = RIGHT_SPEED
    z  = 0
  if (d.data == "LEFT"):
    x   = 0
    y   = LEFT_SPEED
    z  = 0

  msg.linear.x, msg.linear.y = Rotate(x, y, ROTATE_V_ANG)
  msg.angular.z = 0
  pub.publish(msg)

if __name__ == '__main__':
  rospy.init_node('ir_control', anonymous=True)
  rospy.Subscriber("recharge_ctrl", String, ir_callback)
  rospy.spin()