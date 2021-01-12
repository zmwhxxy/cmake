# 所需的最低cmake版本
cmake_minimum_required(
    VERSION
    3.5
    FATAL_ERROR
)

# 定义工程名为Account
project(
    Account
    LANGUAGES
    CXX
)

# 使用account.h, account.cpp源文件，创建一个对象库account-objs
add_library(
    account-objs
    OBJECT
    account.h
    account.cpp
)

# 设置编译的对象库account-objs与生成位置无关。（兼容老编译器）
set_target_properties(
    account-objs
    PROPERTIES
    POSITION_INDEPENDENT_CODE 1
)

# 使用account-objs对象库，创建一个动态链接库目标account-shared
add_library(
    account-shared
    SHARED
    $<TARGET_OBJECTS:account-objs>
)

# 使用account-objs对象库，创建一个静态链接库目标account-static
add_library(
    account-static
    STATIC
    $<TARGET_OBJECTS:account-objs>
)

# 通过编译和链接main.cpp源文件，来生一个可执行文件Account
add_executable(
    Account
    main.cpp
)

# 将静态连接库account-static链接到可执行目标Account上
target_link_libraries(
    Account
    account-static
)