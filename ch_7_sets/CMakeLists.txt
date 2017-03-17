cmake_minimum_required(VERSION 3.6)
project(ch_7_sets)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(set set.c set.h list.c list.h)
add_executable(cover cover.c cover.h set.c set.h list.c list.h)
add_executable(set_ex-1 set/ex-1.c set.c set.h list.c list.h)
add_executable(set_ex-2 set/ex-2.c set.c set.h list.c list.h)