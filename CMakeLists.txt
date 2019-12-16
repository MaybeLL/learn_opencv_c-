#CMake最低版本号要求
cmake_minimum_required(VERSION 3.12)
#项目信息
project(learn_opencv)
# set(变量 值)
set(CMAKE_CXX_STANDARD 11)
set(SOURCE_FILES main.cpp )
#指定生成目标
add_executable(learn_opencv ${SOURCE_FILES})

#cmake_minimum_required(VERSION 3.2)
#
#PROJECT(geometry)
#设置目录
#include_directories("/usr/local/include/eigen3")
#
#add_executable(Geometry useGeometry.cpp)