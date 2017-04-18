cmake_minimum_required(VERSION 2.8.4)
project(CPPTutorials)

set(
    CMAKE_CXX_STANDARD 11
)

set(
    SOURCE_FILES
    src/random_sim.cpp
    src/travel_cost.cpp
    src/cash_register.cpp
    src/struct.cpp
    src/pointer.cpp
    src/vectors.cpp
)

set(
    OBJECT_SOURCES
    src/house.cpp
)

add_library(classes OBJECT ${OBJECT_SOURCES})


# add_executable(CPPTutorials ${SOURCE_FILES})
# add_executable(Tutorials main.cpp $<TARGET_OBJECTS:classes>)
add_executable(Tutorials src/main.cpp src/house.h src/house.cpp)
add_executable(Pointer src/pointer.cpp)
add_executable(Vectors src/vectors.cpp)
