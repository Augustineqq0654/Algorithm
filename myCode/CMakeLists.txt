cmake_minimum_required(VERSION 3.0)  # cmake -G "MinGW Makefiles" ..
project(MYCODE)

# 头文件目录
include_directories("${CMAKE_CURRENT_SOURCE_DIR}/include")
# 源文件目录
AUX_SOURCE_DIRECTORY("${CMAKE_CURRENT_SOURCE_DIR}" DIR_SRCS)

# 生成可执行文件
add_executable(main ./main.c ${DIR_SRCS})
