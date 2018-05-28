//
//  Linear-Search.cpp
//  Searching-Algorithms
//
//  Created by Will  on 19/05/2018.
//  Copyright © 2018 GreenTech. All rights reserved.
//

#include <iostream>
#include <vector>

#include "Linear_Search.h"

Linear_Search::Linear_Search() {
    std::cout << "I am a Linear Search Algorithm" << std::endl;
}

int linear_search(int d[], int index) {
    for(int i=0; i < sizeof(d)/ sizeof(d[0]; i++){
        if(d[i] == index) {
            return i;
        }
    }
    
    return -1;
}
