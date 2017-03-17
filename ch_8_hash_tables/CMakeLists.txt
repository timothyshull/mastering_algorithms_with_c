cmake_minimum_required(VERSION 3.6)
project(ch_8_hash_tables)

set(CMAKE_CXX_STANDARD 11)

include_directories(${CMAKE_CURRENT_SOURCE_DIR})

add_executable(chtbl chtbl.c chtbl.h list.c list.h)
add_executable(hashpjw hashpjw.c hashpjw.h)
add_executable(ohtbl ohtbl.c ohtbl.h)
add_executable(lex lex.c lex.h symbol.h)
add_executable(chtbl_ex-1 chtbl/ex-1.c chtbl.c chtbl.h list.c list.h)
add_executable(ohtbl_ex-1 ohtbl/ex-1.c ohtbl.c ohtbl.h list.c list.h)
