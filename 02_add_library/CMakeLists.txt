#指定cmake的最低兼容版本
cmake_minimum_required(VERSION 3.6)

#指定要生成项目的名称和版本号 以及使用的编码语言
project(Tutorial VERSION 1.0 LANGUAGES CXX)

#指定使用main.cpp源文件创建,可执行文件并命名为项目名(Tutorial)
add_executable(${PROJECT_NAME} main.cpp)

#添加utlis目录并调用utils目录下的CMakeLists.txt文件生utlis库
add_subdirectory(utils)

#链接库utils到项目Tutorial
target_link_libraries(${PROJECT_NAME} PUBLIC utils)
