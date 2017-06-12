cmake_minimum_required(VERSION 3.2.0)

set(TEST_NAME Distances)

project (${TEST_NAME})

set(CXXFLAGS "-std=c++14 -O3 -Wall")

add_executable(Distances main.cpp)