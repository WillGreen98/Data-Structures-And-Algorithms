//
//  Quick_Sort.cpp
//  Sorting-testing
//
//  Created by Will  on 18/05/2018.
//  Copyright © 2018 GreenTech. All rights reserved.
//

#include <iostream>
#include <vector>

#include "Quick_Sort.h"

Quick_Sort::Quick_Sort() {
    std::cout << "I am a Quick Sort Algorithm" << std::endl;
}

int block_classification(int d[], int left_wall, int right_wall) {
    int partion = d[right_wall];
    int a = left_wall - 1;
    
    for(int b=left_wall; b <= right_wall - 1; b++) {
        if(d[b] <= int(partion)) {
            a++;
            std::swap(d[a], d[b]);
        }
    }
    std::swap(d[a + 1], d[right_wall]);
    return a + 1;
}

void quick_sort(std::vector<int> d[], int left_wall, int right_wall) {
    if(left_wall < right_wall) {
        int partition = block_classification(d, left_wall, right_wall);
        quick_sort(d, left_wall, partition - 1);
        quick_sort(d, partition + 1, right_wall);
    }
}
