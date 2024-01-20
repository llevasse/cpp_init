#include "MutantStack.hpp"

MutantStack::MutantStack( void ){
	std::cout << "MutantStack default \033[32mconstructor\033[0m called!" << std::endl;
}

MutantStack::MutantStack( MutantStack const &obj){
	std::cout << "MutantStack copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

MutantStack &MutantStack::operator= ( MutantStack const &obj){
	std::cout << "MutantStack copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

MutantStack::~MutantStack( void ){
	std::cout << "MutantStack \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const MutantStack &obj){
	out << "MutantStack";
	(void)obj;
	return (out);
}
