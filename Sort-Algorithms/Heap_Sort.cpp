//
// Created by Will  on 13/06/2018.
//

#include <iostream>
#include <algorithm>

#include "Heap_Sort.h"

Heap_Sort::Heap_Sort() {
    std::cout << "I am a Heap Sort Algorithm" << std::endl;
}

void heap(int d[], int x, int index) {
    int largest = index;
    int left_wall = 2 * index + 1;
    int right_wall = 2 * index + 2;

    if(left_wall < x && d[left_wall] > d[largest]) { largest = left_wall; }
    if(right_wall < x && d[right_wall] > d[largest]) {largest = right_wall; }

    if(largest != index) {
        std::swap(d[index], d[largest]);
        heap(d, x, largest);
    }
}

void heap_sort(int d[], int x) {
    for(int i = x / 2 - 1; i >= 0; i--) { heap(d, x, i); }

    for(int i = x-1; i >= 0; i--) {
        std::swap(d[0], d[i]);
        heap(d, i, 0);
    }
}