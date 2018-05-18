//
//  Quick_Sort.hpp
//  Sorting-testing
//
//  Created by Will  on 18/05/2018.
//  Copyright © 2018 GreenTech. All rights reserved.
//

#ifndef Quick_Sort_hpp
#define Quick_Sort_hpp

#include <stdio.h>

class Quick_Sort {
    public:
        Quick_Sort();
    };

void quick_sort(std::vector<int> d[]);
int block_classification(std::vector<int> d[], int left_wall, int right_wall);

#endif /* Quick_Sort_hpp */
