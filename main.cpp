//
//  main.cpp
//  Sorting-testing
//
//  Created by Will  on 12/05/2018.
//  Copyright © 2018 GreenTech. All rights reserved.
//

#include <iostream>
#include <fstream>
#include <vector>

#include "nlohmann/json.hpp"

#include "Search-Algorithms/Binary_Search.h"
#include "Search-Algorithms/Jump_Search.h"
#include "Search-Algorithms/Linear_Search.h"

#include "Sort-Algorithms/Bubble_Sort.h"
#include "Sort-Algorithms/Heap_Sort.h"
#include "Sort-Algorithms/Insertion_Sort.h"
#include "Sort-Algorithms/Merge_Sort.h"
#include "Sort-Algorithms/Quick_Sort.h"
#include "Sort-Algorithms/Selection_Sort.h"

using json = nlohmann::json;
std::ifstream data("/Date-Sets/data_sets.json");

int main(int argc, char * argv[]) {
    json json;
    data >> json;
    
    std::vector<int> data_arr_one = json["data_sets"]["data_arr_one"];
    std::vector<int> data_arr_two = json["data_sets"]["data_arr_two"];
    std::vector<int> data_arr_three = json["data_sets"]["data_arr_three"];

    int usr_choice;
    std::cout << "================ Menu ================" << std::endl;
    std::cout << "What would you like to do: " << std::endl;
    std::cout << "1. Data Structures" << std::endl;
    std::cout << "2. Search Algorithms" << std::endl;
    std::cout << "3. Sort Algorithms" << std::endl;
    std::cin >> usr_choice;

    if(usr_choice == 1) {
        std::cout << "================ Data Structures ================" << std::endl;
        std::cout << "Binary Tree" << std::endl;
        std::cout << "Linked List" << std::endl;
        std::cout << "Red Black Tree" << std::endl;
        std::cout << "Stack" << std::endl;
    }

    if(usr_choice == 2) {
        std::cout << "================ Search ================" << std::endl;
        std::cout << "Binary Search" << std::endl;
        std::cout << "Jump Search" << std::endl;
        std::cout << "Linear Search" << std::endl;
        std::cout << "Graphs: " << std::endl;
        std::cout << "Breadth First Search" << std::endl;
        std::cout << "Depth First Search" << std::endl;
    }

    if(usr_choice == 3) {
        std::cout << "================ Sort ================" << std::endl;
        std::cout << "Bubble Sort" << std::endl;
        std::cout << "Heap Sort" << std::endl;
        std::cout << "Insertion Sort" << std::endl;
        std::cout << "Merge Sort" << std::endl;
        std::cout << "Quick Sort" << std::endl;
        std::cout << "Selection Sort" << std::endl;
    }

    return 0;
}
