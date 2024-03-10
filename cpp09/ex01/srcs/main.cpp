#include "RPN.hpp"

int main(int argc, char **argv){
	if (argc == 2){
		RPN rpn(argv[1]);
	}
	else
		std::cout << "Error : program should be used as './RPN \"[numbers and operators]\"'" << std::endl; 
}
