#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ){
	if (!MUTE)
		std::cout << "PmergeMe default \033[32mconstructor\033[0m called!" << std::endl;
}

PmergeMe::PmergeMe( PmergeMe const &obj){
	if (!MUTE)
		std::cout << "PmergeMe copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

PmergeMe &PmergeMe::operator= ( PmergeMe const &obj){
	if (!MUTE)
		std::cout << "PmergeMe copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

PmergeMe::~PmergeMe( void ){
	if (!MUTE)
		std::cout << "PmergeMe \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const PmergeMe &obj){
	out << "PmergeMe";
	(void)obj;
	return (out);
}
