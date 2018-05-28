//
//  Binary_Search.cpp
//  Searching-Algorithms
//
//  Created by Will  on 19/05/2018.
//  Copyright © 2018 GreenTech. All rights reserved.
//

#include <iostream>
#include <vector>

#include "Binary_Search.h"

Binary_Search::Binary_Search() {
    std::cout << "I am a Binary Search Algorithm" << std::endl;
}

int binary_search(int d[], int index, int left_wall, int right_wall) {
    if(right_wall >= 1) {
        int middle_bound = left_wall + ((right_wall + 1)/2);
        
        if(d[middle_bound] > index) {
            binary_search(d, index, left_wall, middle_bound - 1);
        } else if(d[middle_bound] == index) {
            return middle_bound;
        } else if (d[middle_bound] > index) {
            binary_search(d, index, middle_bound + 1, right_wall);
        }
    }
    
    return -1;
}
