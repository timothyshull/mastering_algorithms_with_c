cmake_minimum_required(VERSION 3.6)
project(ch_6_stacks_and_queues)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(stack stack.c stack.h list.c list.h)
add_executable(queue queue.c queue.h list.c list.h)
add_executable(events events.h events.c event.h queue.c queue.h list.c list.h)
add_executable(stack_ex-1 stack/ex-1.c list.h list.c stack.h stack.c)