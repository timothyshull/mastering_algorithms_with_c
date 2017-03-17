cmake_minimum_required(VERSION 3.6)
project(ch_12_sorting_and_searching)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(bisearch bisearch.c sort.h)
add_executable(ctsort ctsort.c sort.h)
add_executable(directls directls.c sort.h)
add_executable(issort issort.c sort.h)
add_executable(mgsort mgsort.c sort.h)
add_executable(qksort qksort.c sort.h)
add_executable(rxsort rxsort.c sort.h)
add_executable(spell spell.c spell.h sort.h search.h)

add_executable(search_ex-1 search/ex-1.c search.h sort.h spell.h spell.c)
add_executable(search_ex-2 search/ex-2.c search.h sort.h spell.h spell.c)
add_executable(sort_ex-1 sort/ex-1.c sort.h)
add_executable(sort_ex-2 sort/ex-2.c directls.c directls.h sort.h)
