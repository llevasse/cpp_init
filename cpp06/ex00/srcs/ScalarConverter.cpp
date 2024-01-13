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
	(void)obj;
	return (*this);
}

ScalarConverter::~ScalarConverter( void ){
	std::cout << "ScalarConverter \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const ScalarConverter &obj){
	out << "ScalarConverter";
	(void)obj;
	return (out);
}

void	printChar( char c ){
	std::cout << "Char type passed" << std::endl;
	std::cout << "char : '" << c << "'" << std::endl;
	std::cout << "int : " << static_cast<int>(c) << std::endl;
	std::cout << "float : " << static_cast<float>(c) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(c) << std::endl << std::endl;
}

void	printInt( std::string input ){
	std::cout << "Int type passed" << std::endl;
	int nb = atoi(input.c_str());
	if (isprint(nb))
		std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "char : *unprintable*" << std::endl;
	std::cout << "int : " << nb << std::endl;
	std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(nb) << std::endl << std::endl;
}

void	printDouble( std::string input ){
	std::cout << "Double type passed" << std::endl;
	double nb = atof(input.c_str());
	if (isprint(nb))
		std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "char : *unprintable*" << std::endl;
	std::cout << "int : " << static_cast<int>(nb) << std::endl;
	std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double : " << nb << std::endl << std::endl;
}

void	printFloat( std::string input ){
	std::cout << "Float type passed" << std::endl;
	float nb = atof(input.c_str());
	if (isprint(nb))
		std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "char : *unprintable*" << std::endl;
	std::cout << "int : " << static_cast<int>(nb) << std::endl;
	std::cout << "float : " << nb << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(nb) << std::endl << std::endl;
}


void ScalarConverter::convert( std::string input ){
	int is_float	= (input.find("f") != std::string::npos);
	int is_double	= (input.find(".") != std::string::npos);
	if ((input[0] < '0' || input[0] > '9') && isprint(input[0]))
		printChar(input[0]);
	else if (input[0] >= '0' && input[0] <= '9' && !is_double && !is_float)
		printInt(input);
	else if (is_double && !is_float)
		printDouble(input);
	else if (is_float)
		printFloat(input);
}
