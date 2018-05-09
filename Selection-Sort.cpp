#include <iostream>

int datum;

void selection_sort(int d[]) {
    int d[] = datum;
    
    for(int i=0; i <= datum - 1; i++) {
        int min_a_b = i;

        for(int j=i + 1; j < datum; j++) {
            if(d[j] < d[min_a_b]) {
                min_a_b = j;
            }
        }

        if(min_a_b != j) {
            std::swap(d[i], d[min_a_b]);
        }
    }
}

int main(int argc, char* argv[]) {
    return 0;
}