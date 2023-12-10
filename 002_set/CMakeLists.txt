cmake_minimum_required(VERSION 3.12)
project(UseSet)

set(CMAKE_CXX_STANDARD 14)

set(SRC_LIST main.cpp)

add_executable(${PROJECT_NAME} ${SRC_LIST})
