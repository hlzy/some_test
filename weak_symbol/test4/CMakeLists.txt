#Make 最低版本号要求                                                                                                                                               
cmake_minimum_required (VERSION 2.8)
# 项目信息
project (Demo1)
#set(CMAKE_CXX_FLAGS " -g")
#set(CMAKE_C_FLAGS " -g")
#set(LIAN_TEST "lian hello")
 
# 添加 math 子目录
add_library(Strong strong.c) 
add_executable(Demo weak2.c)
# 添加链接库
target_link_libraries(Demo -Wl,--whole-archive Strong -Wl,--no-whole-archive Strong)

