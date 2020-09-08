cmake_minimum_required(VERSION 3.7.0 FATAL_ERROR)

SET (CMAKE_C_FLAGS   "-Wall -std=c++11")
SET (CMAKE_CXX_FLAGS "-Wall -std=c++11 -g ")

project(meu_prog)

add_executable(meu_prog main.cpp)

