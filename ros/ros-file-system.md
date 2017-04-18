# ROS Filesystem

## `rospack`
`rospack` allows you to get information about packages

```bash
$ rospack find roscpp
```

## `roscd`
`roscd` allows you to change directory directly to a package or a stack
```bash
$ roscd roscpp
```
Note that roscd, like other ROS tools, will only find ROS packages that are within the directories listed in your `ROS_PACKAGE_PATH`, to see what is in your `ROS_PACKAGE_PATH`, do this
```bash
$ echo $ROS_PACKAGE_PATH
```

## `roscd log`
`roscd log` will take you to the folder where ROS stores log files. Note that if you have not run any ROS programs, this will yield an error saying that it does not yet exist
```bash
$ roscd log
```

## `rosls`
`rosls` allows you to list directly in a package by name rather than by absolute path
