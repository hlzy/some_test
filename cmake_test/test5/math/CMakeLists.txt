# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)
# 生成链接库
#add_subdirectory(${PROJECT_SOURCE_DIR}/math2)
include_directories(/home/lianhe/lian.he/test/cmake_test/test5/math2)

add_library (MathFunctions SHARED ${DIR_LIB_SRCS})
#target_link_libraries (MathFunctions MathFunctions2)
#set_target_properties(MathFunctions PROPERTIES DEBUG_POSTFIX "d")
