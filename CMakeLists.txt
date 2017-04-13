cmake_minimum_required(VERSION 2.8.4)
project(CPPTutorials)

set(
        CMAKE_CXX_STANDARD 11
)

set(
        SOURCE_FILES
        random-sim.cpp
        travel-cost.cpp
        cash-register.cpp
        Employees.cpp Pointer.cpp Vectors.cpp.cpp)

set(
        OBJECT_SOURCES
        House.cpp
)

add_library(classes OBJECT ${OBJECT_SOURCES})


add_executable(CPPTutorials ${SOURCE_FILES})
add_executable(Tutorials main.cpp $<TARGET_OBJECTS:classes>)
add_executable(Pointer Pointer.cpp)
add_executable(Vectors Vectors.cpp)

