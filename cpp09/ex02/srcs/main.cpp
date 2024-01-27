#include "PmergeMe.hpp"

int main(int argc, char **argv){
	PmergeMe merge;

	double	vecTime = merge.sortVector(argc, argv);
//	double	deqTime = merge.sortDeque(argc, argv);

	std::cout << "Vector sorting time of " << (argc - 1) << " elements : " << vecTime << std::endl;
//	std::cout << "Deque sorting time of " << (argc - 1) << " elements : " << deqTime << std::endl;
}
