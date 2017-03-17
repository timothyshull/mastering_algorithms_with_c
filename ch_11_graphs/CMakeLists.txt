cmake_minimum_required(VERSION 3.6)
project(ch_11_graphs)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(graph graph.c graph.h set.c set.h)
add_executable(bfs bfs.c bfs.h list.c list.h queue.c queue.h)
add_executable(dfs dfs.c dfs.h list.c list.h queue.c queue.h)
add_executable(graph_ex-1 graph/ex-1.c list.c list.h set.c set.h graph.c graph.h)
add_executable(graph_ex-2 graph/ex-2.c list.c list.h set.c set.h graph.c graph.h bfs.h bfs.c)
add_executable(graph_ex-3 graph/ex-3.c list.c list.h set.c set.h graph.c graph.h dfs.h dfs.c)