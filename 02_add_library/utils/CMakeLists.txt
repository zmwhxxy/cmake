#指定该CMakeLists.txt兼容的最低cmake版本号
cmake_minimum_required(VERSION 3.6 FATAL_ERROR)

#指定项目名称为:utils
project(utils VERSION 1.0 LANGUAGES CXX)

#搜寻当前CMakeLists.txt文件所在的目录下的所有源文件保存为列表_src
aux_source_directory(${CMAKE_CURRENT_SOURCE_DIR} _src)

#使用列表_src中的原文创建库文件utils
add_library(${PROJECT_NAME} ${_src})

#将头文件的路径包含在库目标中,便于使用库的时候引用库的头文件.
#PUBlIC: 使用库的对象可以引用该路径
#PRIVATE: 引用路径只对库本身可见 
target_include_directories(${PROJECT_NAME} PUBLIC ${CMAKE_CURRENT_SOURCE_DIR})
