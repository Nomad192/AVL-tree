cmake_minimum_required(VERSION 3.20)

project(AVL-tree)

set(CMAKE_CXX_STANDARD 14)

add_compile_definitions(TREE_TYPE=int) #unsigned\ int
add_compile_definitions(TREE_TYPE_SP="d")

add_library(AlmostTree STATIC scr/AlmostTree.hpp scr/AlmostTree.cpp)
add_library(is_the_tree_test STATIC scr/is_the_tree_test.hpp scr/is_the_tree_test.cpp)
add_library(Full_Test STATIC scr/Full_Test.hpp scr/Full_Test.cpp scr/is_the_tree_test.hpp scr/is_the_tree_test.cpp)

target_link_libraries(Full_Test is_the_tree_test)
target_link_libraries(Full_Test AlmostTree)

add_executable(${PROJECT_NAME} main.cpp scr/AVL.hpp scr/AVL.cpp)

target_link_libraries(${PROJECT_NAME} Full_Test)