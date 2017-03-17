cmake_minimum_required(VERSION 3.6)
project(ch_16_graph_algorithms)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(graph2 graph.c graph.h list.c list.h set.c set.h)
add_executable(mst mst.c graph.c graph.h graphalg.h list.c list.h)
add_executable(route route.c route.h list.c list.h graphalg.h graph.c graph.h)
add_executable(shortest shortest.c list.c list.h set.c set.h graph.c graph.h graphalg.h)
add_executable(tsp tsp.c list.c list.h graph.c graph.h graphalg.h)
add_executable(graphalg_ex-1 graphalg/ex-1.c list.c list.h set.c set.h graph.c graph.h graphalg.h)
add_executable(graphalg_ex-2 graphalg/ex-2.c list.c list.h set.c set.h graph.c graph.h graphalg.h route.c route.h)
