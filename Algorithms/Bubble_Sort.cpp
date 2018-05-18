//
//  Bubble_Sort.cpp
//  Sorting-testing
//
//  Created by Will  on 12/05/2018.
//  Copyright © 2018 GreenTech. All rights reserved.
//

#include <iostream>
#include <vector>

#include "Bubble_Sort.h"

Bubble_Sort::Bubble_Sort() {
    std::cout << "I am a Bubble Sort Algorithm" << std::endl;
}

void bubble_sort(std::vector<int> d[]) {
    for(int a=0; a < d->size(); a++) {
        for(int b=1; b < (d->size() - 1); b++) {
            if(d[a] > d[b]) {
                std::vector<int> checker = d[b];
                d[b] = d[b+1];
                d[b+1] = checker;
            }
        }
    }
}
