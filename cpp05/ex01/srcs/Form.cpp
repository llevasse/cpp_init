#include "Form.hpp"

Form::Form( void ){
	std::cout << Form default 033[32mconstructor033[0m called! << std::endl;
}

Form::Form( Form const &obj){
	std::cout << Form copy 033[32mconstructor033[0m called! << std::endl;
	if (this != &obj)
		*this = obj;
}

Form Form::operator= ( Form const &obj){
	std::cout << Form copy assignment operator called! << std::endl;
	return (*this);
}

Form::~Form( void ){
	std::cout << Form 033[31mdestructor033[0m called! << std::endl;
}

std::ostream &operator << (std::ostream &out, const Form &obj){
	out << Form;
	return (out);
}
