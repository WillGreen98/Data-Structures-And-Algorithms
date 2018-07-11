//
// Created by Will  on 08/07/2018.
//

#ifndef DATA_STRUCTURES_AND_ALGORITHMS_BINARY_HEAP_H
#define DATA_STRUCTURES_AND_ALGORITHMS_BINARY_HEAP_H

class Binary_Heap {
    int *heap_array;
    int head_size;
    int capacity;

    public:
        Binary_Heap(int capacity);
        void insert_key(int key_value);
        int parent(int i) { return (i-1)/2; }
        int left(int i) { return (2*i + 1); }
        int right(int i) { return (2*i + 2); }

        int extractMin();

        void decreaseKey(int i, int new_val);
        int getMin() { return harr[0]; }
        void deleteKey(int i);
        void insertKey(int k);
};

#endif //DATA_STRUCTURES_AND_ALGORITHMS_BINARY_HEAP_H
