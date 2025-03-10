cmake_minimum_required(VERSION 3.29)
project(MultiThreading)

set(CMAKE_CXX_STANDARD 20)

add_executable(MultiThreading main.cpp
        new.cpp)
add_executable(MultiThreading1
        threding.cpp)
