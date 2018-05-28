//
//  Insertion_Sort.cpp
//  Sorting-testing
//
//  Created by Will  on 18/05/2018.
//  Copyright © 2018 GreenTech. All rights reserved.
//

#include <iostream>
#include <vector>

#include "Insertion_Sort.h"

Insertion_Sort::Insertion_Sort() {
    std::cout << "I am an Insertion Sort Algorithm" << std::endl;
}

void insertion_sort(std::vector<int> d[]) {
    for(int a=0; a < d->size(); a++) {
        int b = a;
        while(b > 0 && d[b] < d[b-1]) {
            std::vector<int> t = d[b];
            d[b] = d[b-1];
            d[b-1] = t;
            b--;
        }
    }
}
