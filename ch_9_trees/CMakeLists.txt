cmake_minimum_required(VERSION 3.6)
project(ch_9_trees)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(bitree bitree.c bitree.h)
add_executable(traverse traverse.c traverse.h list.c list.h)
add_executable(bistree bistree.c bistree.h)
add_executable(bistree_ex-1 bistree/ex-1.c bistree.c bistree.c)
add_executable(bitree_ex-1 bitree/ex-1.c bitree.c bitree.c traverse.c traverse.h)
