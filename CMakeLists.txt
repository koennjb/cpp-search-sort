cmake_minimum_required(VERSION 3.14)
project(SortSearch)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(SortSearch
        main.cpp Sorts.cpp Sorts.h)
