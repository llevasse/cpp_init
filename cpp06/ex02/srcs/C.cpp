#include "C.hpp"

C::C( void ){
	std::cout << "C default \033[32mconstructor\033[0m called!" << std::endl;
}

C::C( C const &obj){
	std::cout << "C copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

C &C::operator= ( C const &obj){
	std::cout << "C copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

C::~C( void ){
	std::cout << "C \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const C &obj){
	out << "C";
	(void)obj;
	return (out);
}
