""" This is a simple python script
    showing you how to call the methods or your module
    from Python

"""

import sys
from naoqi import ALProxy

IP = "127.0.0.1"
PORT = 9559

try:
  goal_tracker_Proxy = ALProxy("goal_tracker",IP,PORT)
except Exception,e:
  print "Could not create proxy to goal_tracker_Proxy"
  print "Error was: ", e
  sys.exit(1)


# First, send a simple string

# Call the 'echo' function from goal_tracker:
try:
  ret = goal_tracker_Proxy.echo("Hello, world!")
except Exception,e:
  print "Could not call 'echo' method from goal_tracker"
  print "Error was: ", e
  sys.exit(1)

print "echo returns: ", ret


# More complex types can also be used:

ret = goal_tracker_Proxy.echo([42, "foo"])

print "echo returns: ", ret


