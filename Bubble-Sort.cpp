#include <iostream>

void bubble_Sort(int d[]) {
	d[] = data;
	
	for(int a=0; a < data.length() + 1; a++) {
		for(int b=1; b < data.length() + 1; b++) {
			if(data[a] > data[b]) { 
				int checker = data[b];
				data[b] = data[b+1];
				data[b+1] = checker;
			}
		}
	}
}

int main(int argc, char* argv[]) {

    return 0;
}