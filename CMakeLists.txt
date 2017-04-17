cmake_minimum_required(VERSION 2.8.4)
project(CPPTutorials)

set(
    CMAKE_CXX_STANDARD 11
)

set(
    SOURCE_FILES
    random_sim.cpp
    travel_cost.cpp
    cash_register.cpp
    struct.cpp
    pointer.cpp
    vectors.cpp
)

set(
    OBJECT_SOURCES
    house.cpp
)

add_library(classes OBJECT ${OBJECT_SOURCES})


# add_executable(CPPTutorials ${SOURCE_FILES})
# add_executable(Tutorials main.cpp $<TARGET_OBJECTS:classes>)
add_executable(Tutorials main.cpp house.h house.cpp)
add_executable(Pointer pointer.cpp)
add_executable(Vectors vectors.cpp)
