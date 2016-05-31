cmake_minimum_required(VERSION 3.5)
project(c_tp)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.c function.cpp)
add_executable(c_tp ${SOURCE_FILES})