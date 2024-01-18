#include "easyFind.hpp"
#include <vector>

int main(){
	std::vector<int> vec;

	for (int i=0; i < 6;i++){
		if (i == 3)
			vec.push_back(42);
		else
			vec.push_back(i);
	}
	
	std::cout << easyFind(vec, 42) << std::endl;
}
