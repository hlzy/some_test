# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)
set(CMAKE_C_FLAGS "-g")
message(${LIAN_TEST})

message("Math2 CMAKE_CXX_FLAGS:${CMAKE_CXX_FLAGS}")
message("Math2 CMAKE_C_FLAGS:${CMAKE_C_FLAGS}")
# 生成链接库
add_library (MathFunctions2 SHARED ${DIR_LIB_SRCS})
#这里的CMAKE_C_FLAGS实际也产生了效果，最终的MathFunctions2没有Debug模式
#set(CMAKE_C_FLAGS "")

#set_target_properties(MathFunctions PROPERTIES DEBUG_POSTFIX "d")
