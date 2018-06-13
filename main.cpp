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
std::ifstream data("/Data/data_sets.json");

int main(int argc, char * argv[]) {
    json json;
    data >> json;
    
    std::vector<int> data_arr_one = json["data_sets"]["data_arr_one"];
    std::vector<int> data_arr_two = json["data_sets"]["data_arr_two"];
    std::vector<int> data_arr_three = json["data_sets"]["data_arr_three"];

    bubble_sort(&data_arr_one);

    return 0;
}
