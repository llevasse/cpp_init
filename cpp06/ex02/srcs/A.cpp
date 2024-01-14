#include "A.hpp"

A::A( void ){
	std::cout << "A default \033[32mconstructor\033[0m called!" << std::endl;
}

A::A( A const &obj){
	std::cout << "A copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

A &A::operator= ( A const &obj){
	std::cout << "A copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

A::~A( void ){
	std::cout << "A \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const A &obj){
	out << "A";
	(void)obj;
	return (out);
}
