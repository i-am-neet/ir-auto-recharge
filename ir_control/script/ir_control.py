#!/usr/bin/env python

import math
import rospy
from geometry_msgs.msg import Twist
from std_msgs.msg import String

ROTATE_V_ANG = 0

FORWARD_SPEED =  15
BACK_SPEED    = -15
LEFT_SPEED    =  15
RIGHT_SPEED   = -15

def Rotate(x, y, theta):
  _x = x*math.cos(math.radians(theta)) - y*math.sin(math.radians(theta))
  _y = x*math.sin(math.radians(theta)) + y*math.cos(math.radians(theta))
  return _x, _y

def ir_callback(d):
  pub = rospy.Publisher('motion/cmd_vel', Twist, queue_size=1)
  msg = Twist()
  if (d.data == "ALL"):
    x  = BACK_SPEED
    y  = 0
    z  = 0
    # rospy.signal_shutdown('Quit')
  if (d.data == "CENTER"):
    x  = BACK_SPEED
    y  = 0
    z  = 0
  if (d.data == "CENTER_RIGHT"):
    x  = 0 #BACK_SPEED
    y  = RIGHT_SPEED
    z  = 0
  if (d.data == "CENTER_LEFT"):
    x  = 0 #BACK_SPEED
    y  = LEFT_SPEED
    z  = 0
  if (d.data == "RIGHT"):
    x  = 0
    y  = RIGHT_SPEED
    z  = 0
  if (d.data == "LEFT"):
    x  = 0
    y  = LEFT_SPEED
    z  = 0
  if (d.data == "BACK"):
    x  = FORWARD_SPEED
    y  = 0
    z  = 0
  if (d.data == "STOP"):
    x  = 0
    y  = 0
    z  = 0

  msg.linear.x, msg.linear.y = Rotate(x, y, ROTATE_V_ANG)
  msg.angular.z = 0
  pub.publish(msg)

if __name__ == '__main__':
  rospy.init_node('ir_control', anonymous=True)
  rospy.Subscriber("recharge_ctrl", String, ir_callback)
  rospy.spin()
