cmake_minimum_required(VERSION 3.6)
project(ch_14_data_compression)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(huffman huffman.c bit.c bit.h compress.h pqueue.h heap.c heap.h bitree.c bitree.h)
add_executable(lz77 lz77.c bit.c bit.h compress.h bitree.c bitree.h)
add_executable(transfer transfer.c transfer.h compress.h bitree.c bitree.c)
add_executable(compress_ex-1 compress/ex-1.c compress.h bitree.c bitree.h)
add_executable(bit_ex-1 bit/ex-1.c bit.c bit.h)