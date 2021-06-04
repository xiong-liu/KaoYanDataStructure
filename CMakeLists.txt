cmake_minimum_required(VERSION 3.16)
project(DataStructure LANGUAGES C)

set(CMAKE_C_STANDARD 11)

#添加目录中的所有源文件
add_subdirectory(SequenceTable)

add_executable(DataStructure main.c)

target_link_libraries(DataStructure SequenceTableDynamicArray)




