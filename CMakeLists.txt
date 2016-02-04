cmake_minimum_required(VERSION 3.3)
project(UoR-CPPSortingFloatingPointObjects)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES Program.cpp sorting/Sort.cpp sorting/Sort.h sorting/BubbleSort.cpp sorting/BubbleSort.h Menu.cpp Menu.h)

add_executable(SortingFloatingPointObjects ${SOURCE_FILES})