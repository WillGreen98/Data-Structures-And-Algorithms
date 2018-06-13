//
// Created by Will  on 13/06/2018.
//

#include <iostream>

#include "Merge_Sort.h"

Merge_Sort::Merge_Sort() {
    std::cout << "I am a Merge Sort Algorithm" << std::endl;
}

void merge(int d[], int left_wall, int middle_bound, int right_wall) {
    int a = 0;
    int b = 0;
    int temp = left_wall;

    int n1 = middle_bound - left_wall + 1;
    int n2 = right_wall - middle_bound;

    int L[n1], R[n2];

    for(a = 0; a < n1; a++) { L[a] = d[left_wall + a]; }
    for(b = 0; b < n2; b++) { R[b] = d[middle_bound + 1 + b]; }

    while(a < n1 && b < n2) {
        if (L[a] <= R[b]) {
            d[temp] = L[a];
            a++;
        } else {
            d[k] = R[b];
            b++;
        }
        temp++;
    }

    while(a < n1) {
        d[k] = L[a];
        a++;
        temp++;
    }

    while(b < n2) {
        d[temp] = R[b];
        b++;
        temp++;
    }
}

void merge_sort(int d[], int left_wall, int right_wall) {
    if(left_wall < right_wall) {
        int middle = left_wall + (right_wall-left_wall) / 2;

        merge_sort(d, left_wall, middle);
        merge_sort(d, middle + 1, right_wall);
        merge(d, left_wall, middle, right_wall);
    }
}