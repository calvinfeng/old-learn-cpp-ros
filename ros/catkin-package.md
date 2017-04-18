# `catkin` Package
For a package to be considered a catkin package, it must have
- catkin compliant package.xml file
- `CMakeLists.txt`
- No more than one package in each folder

## One space, many packages
You can include multiple packages in a single catkin workspace
```
workspace_folder/
    src/
        CMakeLists.txt
        package_1/
            CMakeLists.txt
            package.xml
        package_2/
            CMakeLists.txt
            package.xml
        package_3/
            CMakeLists.txt
            package.xml
        ...
```
