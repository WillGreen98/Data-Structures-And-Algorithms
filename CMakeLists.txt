cmake_minimum_required(VERSION 3.11)
project(Data_Structures_and_Algorithms)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)
include_directories(Searching-Algorithms)
include_directories(Searching-Algorithms/Algorithms)
include_directories(Sorting-Algorithms)
include_directories(Sorting-Algorithms/Algorithms)
include_directories(Sorting-Algorithms/cmake-build-debug)
include_directories(Sorting-Algorithms/Data)

add_executable(Data_Structures_and_Algorithms
        Searching-Algorithms/Algorithms/Binary_Search.cpp
        Searching-Algorithms/Algorithms/Binary_Search.h
        Searching-Algorithms/Algorithms/Linear_Search.cpp
        Searching-Algorithms/Algorithms/Linear_Search.h
        Searching-Algorithms/Algorithms/main.cpp
        Searching-Algorithms/Data/data_sets.json
        Searching-Algorithms/LICENSE
        Searching-Algorithms/README.md
        Sorting-Algorithms/Algorithms/Bubble_Sort.cpp
        Sorting-Algorithms/Algorithms/Bubble_Sort.h
        Sorting-Algorithms/Algorithms/Insertion_Sort.cpp
        Sorting-Algorithms/Algorithms/Insertion_Sort.h
        Sorting-Algorithms/Algorithms/main.cpp
        Sorting-Algorithms/Algorithms/Quick_Sort.cpp
        Sorting-Algorithms/Algorithms/Quick_Sort.h
        Sorting-Algorithms/Algorithms/Selection_Sort.cpp
        Sorting-Algorithms/Algorithms/Selection_Sort.h
        Sorting-Algorithms/cmake-build-debug/cmake_install.cmake
        Sorting-Algorithms/cmake-build-debug/CMakeCache.txt
        Sorting-Algorithms/cmake-build-debug/Makefile
        Sorting-Algorithms/cmake-build-debug/Sorting_Algorithms.cbp
        Sorting-Algorithms/Data/data_sets.json
        Sorting-Algorithms/CMakeLists.txt
        Sorting-Algorithms/LICENSE
        Sorting-Algorithms/README.md)
