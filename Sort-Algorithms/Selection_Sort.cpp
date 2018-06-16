//
//  Selection_Sort.cpp
//  Sorting-testing
//
//  Created by Will  on 12/05/2018.
//  Copyright © 2018 GreenTech. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

#include "Selection_Sort.h"

Selection_Sort::Selection_Sort() {
    std::cout << "I am a Selection Sort Algorithm" << std::endl;
}

void selection_sort(std::vector<int> d[]) {
    for(int a=0; a <= d->size(); a++) {
        int min_a_b = a;
        for(int b=1; b < (d->size() - 1); b++) {
            if(d[b] < d[min_a_b]) {
                min_a_b = b;
            }
            
            if(min_a_b != b) {
                std::swap(d[a], d[min_a_b]);
            }
        }
    }
}
