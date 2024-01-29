#include "PmergeMe.hpp"

int main(int argc, char **argv){
	if (argc != 2){
		std::cout << "Error, correct input would be : './PmergeMe \"[A LIST OF ANY NUMBER SEPARATED BY SPACES]\"'" << std::endl;
		return (1);
	}
	PmergeMe merge;

	double	vecTime = merge.sortVector(argc, argv);
	double	deqTime = merge.sortDeque(argc, argv);

	std::cout << "Vector sorting time of " << (argc - 1) << " elements : " << vecTime << std::endl;
	std::cout << "Deque sorting time of " << (argc - 1) << " elements : " << deqTime << std::endl;
	return (0);
}
