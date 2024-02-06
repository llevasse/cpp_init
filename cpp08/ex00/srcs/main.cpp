#include "easyFind.hpp"
#include <vector>
#include <deque>

int main(){
	std::vector<int> vec;
	std::deque<int>	deq;

	std::cout << "Vector : ";
	for (int i=0; i < 10;i++){
		if (i == 3)
			vec.push_back(42);
		else
			vec.push_back(i);
		std::cout << vec[i] << " ";
	}
	std::cout << std::endl <<  "Position of 42 = " << easyFind(vec, 42) << std::endl;
	
	std::cout << "Deque : ";
	for (int i=0; i < 10;i++){
		if (i == 5)
			deq.push_back(42);
		else
			deq.push_back(i);
		std::cout << deq[i] << " ";
	}
	std::cout << std::endl <<  "Position of 42 = " << easyFind(deq, 42) << std::endl;

}
