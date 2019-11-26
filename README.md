# Startup

```bash
$ roscore
```

```bash
# Run robot's motion controller
# In TIMDA, is Mecanum_motion_node whereis in timda_ws
$ rosrun motion <Mecanum_motion_node>
```

```bash
$ rosrun rosserial_python serial_node _port:=</dev/ttyACM0>
# The port must can be read
```

```bash
$ rosrun ir_control ir_control.py
```
