cmake_minimum_required(VERSION 3.6)
project(ch_17_geometric_algorithms)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(cvxhull cvxhull.c list.c list.h geometry.h)
add_executable(geodist geodist.c geodist.h geometry.h list.c list.h)
add_executable(lint lint.c geometry.h list.c list.h)
add_executable(arclen arclen.c geometry.h list.c list.h)
add_executable(geometry_ex-1 geometry/ex-1.c geometry.h list.c list.h geodist.c geodist.h)
add_executable(geometry_ex-2 geometry/ex-2.c geometry.h list.c list.h geodist.c geodist.h)
