cmake_minimum_required(VERSION 3.11)
project(Data_Structures_and_Algorithms)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)
include_directories(Sedarch-Algorithms)
include_directories(Sedarch-Algorithms/Algorithms)
include_directories(Sorting-Algorithms)
include_directories(Sorting-Algorithms/Algorithms)
include_directories(Sorting-Algorithms/cmake-build-debug)
include_directories(Sorting-Algorithms/Data)

add_executable(Data_Structures_and_Algorithms
        Sedarch-Algorithms/Binary_Search.cpp
        Sedarch-Algorithms/Binary_Search.h
        Sedarch-Algorithms/Linear_Search.cpp
        Sedarch-Algorithms/Linear_Search.h
        Sedarch-Algorithms/main.cpp
        Sedarch-Algorithms/Data-Sets/data_sets.json
        Sorting-Algorithms/Bubble_Sort.cpp
        Sorting-Algorithms/Bubble_Sort.h
        Sorting-Algorithms/Insertion_Sort.cpp
        Sorting-Algorithms/Insertion_Sort.h
        Sorting-Algorithms/Quick_Sort.cpp
        Sorting-Algorithms/Quick_Sort.h
        Sorting-Algorithms/Selection_Sort.cpp
        Sorting-Algorithms/Selection_Sort.h
        Sorting-Algorithms/cmake-build-debug/cmake_install.cmake
        Sorting-Algorithms/cmake-build-debug/CMakeCache.txt
        Sorting-Algorithms/cmake-build-debug/Makefile
        Sorting-Algorithms/cmake-build-debug/Sorting_Algorithms.cbp
        Sorting-Algorithms/Data/data_sets.json
        Sorting-Algorithms/CMakeLists.txt
        Sorting-Algorithms/LICENSE
        Sorting-Algorithms/README.md
        Search-Algorithms/Jump_Search.cpp
        Search-Algorithms/Jump_Search.h
        Data-Structures/Linked_List.cpp
        Data-Structures/Linked_List.h
        Sort-Algorithms/Merge_Sort.cpp
        Sort-Algorithms/Merge_Sort.h
        Sort-Algorithms/Heap_Sort.cpp
        Sort-Algorithms/Heap_Sort.h)