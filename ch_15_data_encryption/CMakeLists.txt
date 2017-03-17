cmake_minimum_required(VERSION 3.6)
project(ch_15_data_encryption)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(cbc cbc.c cbc.h encrypt.h bit.c bit.h)
add_executable(des des.c encrypt.h bit.c bit.h)
add_executable(rsa rsa.c encrypt.h bit.c bit.h)
add_executable(encrypt_ex-1 encrypt/ex-1.c encrypt.h)
add_executable(encrypt_ex-2 encrypt/ex-2.c cbc.c cbc.h encrypt.h)
