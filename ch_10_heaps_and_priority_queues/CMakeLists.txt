cmake_minimum_required(VERSION 3.6)
project(ch_10_heaps_and_priority_queues)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(heap heap.c heap.h)
add_executable(parcels parcels.c parcels.h pqueue.h parcel.h heap.c heap.h list.c list.h queue.c queue.h)
add_executable(heap_ex-1 heap/ex-1.c heap.c heap.h)
add_executable(pqueue_ex-1 pqueue/ex-1.c pqueue.h list.c list.h queue.c queue.h)
add_executable(queue_ex-1 queue/ex-1.c list.c list.h queue.c queue.h)