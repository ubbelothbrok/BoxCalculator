
cmake_minimum_required(VERSION 3.10)

project(BoxCalculator VERSION 1.0 LANGUAGES CXX)
set(CMAKE_EXPORT_COMPILE_COMMANDS ON)
include_directories("2D_object")
include_directories("3D_object")
add_executable(box_calculator main.cpp 
    2D_object/Hexagon.cpp 
    2D_object/Pentagon.cpp 
    2D_object/Rectangle.cpp
    2D_object/Triangle.cpp 
    3D_object/Cube.cpp
    3D_object/Cuboid.cpp)
