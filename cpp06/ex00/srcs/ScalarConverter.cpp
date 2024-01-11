#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter( void ){
	std::cout << "ScalarConverter default \033[32mconstructor\033[0m called!" << std::endl;
}

ScalarConverter::ScalarConverter( ScalarConverter const &obj){
	std::cout << "ScalarConverter copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

ScalarConverter &ScalarConverter::operator= ( ScalarConverter const &obj){
	std::cout << "ScalarConverter copy assignment operator called!" << std::endl;
	return (*this);
}

ScalarConverter::~ScalarConverter( void ){
	std::cout << "ScalarConverter \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const ScalarConverter &obj){
	out << "ScalarConverter";
	return (out);
}
