#include <iostream>
#include <fstream>

int read_JSON() {
    std::ifstream data_sets("/Data/data_sets.json", std::ifstream::binary);
    data_sets >> data;
    
    return data;
}

void bubble_Sort(int d[]) {
	d[] = data;
	
	for(int a=0; a < data.lenght + 1; a++) {
		for(int b=1; b < data.lenght + 1; b++) {
			if(data[a] < data[b]) { 
				return 0; 
			} else {
				int checker = data[b];
				data[b] = data[b+1];
				data[b+1] = checker;
			}
		}
	}
	
	std::cout << bubble_Sort(d[])
}

int main(int argc, char* argv[]) {
    std::cout << bubble_Sort(data_sets)

    return 0;
}

