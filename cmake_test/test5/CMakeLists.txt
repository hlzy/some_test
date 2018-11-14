# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
# 项目信息
project (Demo1)
aux_source_directory(. DIR_SRCS)
message(${DIR_SRCS})
# 添加 math 子目录
add_subdirectory(math)
add_subdirectory(math2)

include_directories(${PROJECT_SOURCE_DIR}/math)
include(cmake/test.cmake)
#几种添加库的方式
#link_libraries(/home/lianhe/lian.he/test/cmake_test/test5/build/math/libMathFunctions.a)

#link_directories(${PROJECT_SOURCE_DIR})
#link_libraries(MathFunctions)

#add_definitions("-g")
#add_compile_options("-g")
#set(CMAKE_CXX_FLAGS " -g")
# 指定生成目标
add_executable(Demo ${DIR_SRCS})
# 添加链接库
target_link_libraries(Demo MathFunctions)
target_link_libraries(Demo MathFunctions2)
