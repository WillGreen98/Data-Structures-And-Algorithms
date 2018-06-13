//
// Created by Will  on 13/06/2018.
//

#include <iostream>

#include "Jump_Search.h"

Jump_Search::Jump_Search() {
    std::cout << "I am a Jump Search Algorithm" << std::endl;
};

int jump_search(int d[], int x, int index) {
    int step = sqrt(index);
    int prev = 0;

    while(d[min(step, index)-1] < x) {
        prev = step;
        step += sqrt(index);
        if (prev >= index)
            return -1;
    }

    while (d[prev] < x) {
        prev++;

        if (prev == min(step, index))
            return -1;
    }

    if(d[prev] == x) {
        return prev;
    }

    return -1;
}