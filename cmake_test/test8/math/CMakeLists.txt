# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)
# 生成链接库
#add_subdirectory(${PROJECT_SOURCE_DIR}/math2)
#include_directories(/home/lianhe/lian.he/test/cmake_test/test5/math2)

#set(CMAKE_CXX_FLAGS "-g")
set(VERSION "1.0")
message("Math1 CMAKE_CXX_FLAGS:${CMAKE_CXX_FLAGS}")
message("Math1 CMAKE_C_FLAGS:${CMAKE_C_FLAGS}")
message(${LIAN_TEST})
set(LIAN_TEST "lian helloxxx")
message(${LIAN_TEST})
add_library (MathFunctions SHARED ${DIR_LIB_SRCS})
target_link_libraries (MathFunctions MathFunctions2)
#set_target_properties(MathFunctions PROPERTIES VERSION ${VERSION})
#set_target_properties(MathFunctions PROPERTIES DEBUG_POSTFIX "d")
