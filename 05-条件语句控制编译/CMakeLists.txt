cmake_minimum_required(VERSION 3.5 FATAL_ERROR)

project(ConditionalComplitation LANGUAGES CXX)

#设置一个变量USE_LIBRARY
set(USE_LIBRARY OFF)

#打印信息
message(STATUS "Complie sources into a library? ${USE_LIBRARY}")

#设置变量BUILD_SHARED_LIBS
set(BUILD_SHARED_LIBS OFF)

#创建一个列表_sources变量
list(APPEND _sources date.h date.cpp)

#使用条件判断
if(USE_LIBRARAY)
    # add_libaray will create a static library
    # since BUILD_SHARED_LIBS is OFF
    add_library(date ${_sources})
    add_executable(ConditionalComplitation main.cpp)
    target_link_libraries(ConditionalComplitation date)
else()
    add_executable(ConditionalComplitation main.cpp ${_sources})
endif()
