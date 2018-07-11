//
// Created by Will  on 08/07/2018.
//

#include <iostream>
#include <utility>

#include "Binary_Heap.h"

Binary_Heap::Binary_Heap(int capacity) {
    std::cout << "I am an example of a Binary Heap" << std::endl;

    head_size = 0;
    capacity = capacity;
    heap_array = new int[capacity];
}

void Binary_Heap::insert_key(int key_value) {
    if(head_size == capacity) {
        return;
    }

    head_size++;
    int i = head_size - 1;
    heap_array[i] = key_value;

    while(i != 0 && heap_array[parent(i)] > heap_array[i]) {
        std::swap(&heap_array[i], &heap_array[parent(i)]);
        i = parent(i);
    }
}

