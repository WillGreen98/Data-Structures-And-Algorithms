//
//  Bubble_Sort.cpp
//  Sorting-testing
//
//  Created by Will  on 12/05/2018.
//  Copyright © 2018 GreenTech. All rights reserved.
//

#include <iostream>
#include <vector>
#include <algorithm>

#include "Bubble_Sort.h"

Bubble_Sort::Bubble_Sort() {
    std::cout << "I am a Bubble Sort Algorithm" << std::endl;
}

void bubble_sort(std::vector<int> d[], int a) {
    if(a == 1){ return; };

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

void bubble_sort_recursive(std::vector<int> d[], int a) {
    if(a == 1){ return; };

    for(int a=0; a < d->size()-1; a++)
        if(d[a] > d[a+1])
            swap(d[a], d[a+1]);

    bubble_sort_recursive(d, a);
}
