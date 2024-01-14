#include "B.hpp"

B::B( void ){
	std::cout << "B default \033[32mconstructor\033[0m called!" << std::endl;
}

B::B( B const &obj){
	std::cout << "B copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

B &B::operator= ( B const &obj){
	std::cout << "B copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

B::~B( void ){
	std::cout << "B \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const B &obj){
	out << "B";
	(void)obj;
	return (out);
}
