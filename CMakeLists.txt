cmake_minimum_required(VERSION 3.11)
project(Data_Structures_and_Algorithms)

set(CMAKE_CXX_STANDARD 11)

include_directories(.)
include_directories(cmake-build-debug)
include_directories(Date-Sets)
include_directories(Data-Structures)
include_directories(Search-Algorithms)
include_directories(Sort-Algorithms)


add_executable(Data_Structures_and_Algorithms
        Data-Sets/data_sets.json

        Data-Structures/Binary_Tree.cpp
        Data-Structures/Binary_Tree.h
        Data-Structures/Linked_List.cpp
        Data-Structures/Linked_List.h
        Data-Structures/Red_Black_Tree.cpp
        Data-Structures/Red_Black_Tree.h

        Search-Algorithms/Binary_Search.cpp
        Search-Algorithms/Binary_Search.h
        Search-Algorithms/Jump_Search.cpp
        Search-Algorithms/Jump_Search.h
        Search-Algorithms/Linear_Search.cpp
        Search-Algorithms/Linear_Search.h

        Search-Algorithms/Graphs/Depth_First_Search.cpp
        Search-Algorithms/Graphs/Depth_First_Search.h

        Sort-Algorithms/Bubble_Sort.cpp
        Sort-Algorithms/Bubble_Sort.h
        Sort-Algorithms/Heap_Sort.cpp
        Sort-Algorithms/Heap_Sort.h
        Sort-Algorithms/Insertion_Sort.cpp
        Sort-Algorithms/Insertion_Sort.h
        Sort-Algorithms/Merge_Sort.cpp
        Sort-Algorithms/Merge_Sort.h
        Sort-Algorithms/Quick_Sort.cpp
        Sort-Algorithms/Quick_Sort.h
        Sort-Algorithms/Selection_Sort.cpp
        Sort-Algorithms/Selection_Sort.h

        CMakeLists.txt
        main.cpp
        )