#include "PmergeMe.hpp"

int main(int argc, char **argv){
	if (argc == 1){
		std::cout << "Error, correct input would be : './PmergeMe \"[A LIST OF ANY NUMBER SEPARATED BY SPACES]\"'" << std::endl;
		return (1);
	}
	PmergeMe merge;
	merge.sort(argc, argv);
	return (0);
}
