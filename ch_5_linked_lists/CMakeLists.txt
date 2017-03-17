cmake_minimum_required(VERSION 3.6)
project(ch_5_linked_lists)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_library(clist clist.h clist.c)
add_library(dlist dlist.h dlist.c)
add_library(list list.c list.h)

# add_executable(main main.c dlist.h dlist.c list.h list.c clist.h clist.c)
add_executable(frames frames.h frames.c list.h list.c)
add_executable(page page.h page.c clist.h clist.c)
add_executable(list_ex-1 list/ex-1.c)
add_executable(dlist_ex-1 dlist/ex-1.c)
add_executable(clist_ex-1 clist/ex-1.c)
add_executable(clist_ex-2 clist/ex-2.c)