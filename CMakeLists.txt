cmake_minimum_required(VERSION 3.6)
project(std)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

set(SOURCE_FILES main.cpp shared_ptr.h)
add_executable(std ${SOURCE_FILES})