cmake_minimum_required(VERSION 2.8)
project(Lab3)
add_library(Lab_3 STATIC calculator.cpp)
add_executable(foo calculator.cpp)
