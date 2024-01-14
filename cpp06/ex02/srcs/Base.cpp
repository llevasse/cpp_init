#include "Base.hpp"

Base::Base( void ){
	std::cout << "Base default \033[32mconstructor\033[0m called!" << std::endl;
}

Base::Base( Base const &obj){
	std::cout << "Base copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Base &Base::operator= ( Base const &obj){
	std::cout << "Base copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

Base::~Base( void ){
	std::cout << "Base \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const Base &obj){
	out << "Base";
	(void)obj;
	return (out);
}
