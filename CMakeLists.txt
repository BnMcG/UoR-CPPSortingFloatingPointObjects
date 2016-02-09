cmake_minimum_required(VERSION 3.3)
project(UoR-CPPSortingFloatingPointObjects)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")
set(SOURCE_FILES Program.cpp sorting/UoRBubbleSort.cpp sorting/UoRBubbleSort.h sorting/UoRSort.h sorting/UoRSort.cpp Menu.cpp Menu.h floatingpoint/UoRFloat.cpp floatingpoint/UoRFloat.h)

add_executable(SortingFloatingPointObjects ${SOURCE_FILES})