# 1.要求最低cmake版本是3.5，如果低于3.5就报错
cmake_minimum_required(
    VERSION
    3.5
    FATAL_ERROR    
)

# 2.声明项目名称为hello-world, 使用的编程语言是C++
project(
    hello-world
    LANGUAGES CXX
)

# 3.创建一个静态库目标： 使用的源文件Message类来创建message静态库
add_library(
    message
    STATIC
    Message.h
    Message.cpp
)

# 4.创建可执行文件目标：通过编译和链接源文件main.cpp来创建目标文件hello-world
add_executable(
    hello-world
    main.cpp
)

# 5.将message库链接到可执行文件hello-world
target_link_libraries(
    hello-world
    message
)