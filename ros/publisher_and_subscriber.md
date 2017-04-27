# ROS Publisher & Subscriber

## Prep
Don't forget to source your devel/setup.bash
```
catkin_ws $ source devel/setup.bash
```

## Introduction to `msg` and `srv`
`msg` files are simple text files that describe the fields of a ROS message. They are used to generate source code for
messages in different languages

`srv` files describe a service. It is composed of two parts: a request and response

msgs are just simple text files with a field type and a field name per line. The field you can use are:

- int8, int16, int32, int64
- float32, float64
- string
- time, duration
- variable-length array[] and fixed-length array[]

`msg` example:
```
Header header
string child_frame_id
geometry_msgs/PoseWithCovariance pose
geometry_msgs/TwistWithCovariance twist
```

`srv` files are just like `msg` files except they contain two parts and separate by a `---` line
`srv` example:
```
int64 A
int64 B
---
int64
```
