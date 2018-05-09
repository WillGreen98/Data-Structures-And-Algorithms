#include <iostream>
#include <fstream>
#include <vector>

#include "json/json.h"
#include "Bubble-Sort.h"

int main(int argc, char* argv[]) {
	std::ifstream data("/Data/data_sets.json")

	json json;
	data >> json;

	std::vector<int> data_arr_one = json["data_sets"]["data_arr_one"]
	std::vector<int> data_arr_two = json["data_sets"]["data_arr_two"]
	std::vector<int> data_arr_three = json["data_sets"]["data_arr_three"]

	for(const i : data) {
		std::cout << bubble_Sort(i) << std::endl;
	}

    return 0;
}