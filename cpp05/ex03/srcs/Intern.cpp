#include "Intern.hpp"

Intern::Intern( void ){
	std::cout << "Intern default \033[32mconstructor\033[0m called!" << std::endl;
}

Intern::Intern( Intern const &obj){
	std::cout << "Intern copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Intern &Intern::operator= ( Intern const &obj){
	std::cout << "Intern copy assignment operator called!" << std::endl;
	return (*this);
}

Intern::~Intern( void ){
	std::cout << "Intern \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const Intern &obj){
	out << "Intern";
	return (out);
}
