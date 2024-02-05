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

int		isInt( std::string input ){
	int	n=input.length();
	if (isdigit(input[0]))
		return (1);
	if (n > 1 && (input[0] == '-' || input[0] == '+') && isdigit(input[1]))
		return (1);
	return (0);
}

void	printInt( std::string input ){
	int nb = atoi(input.c_str());
	long long check = atoll(input.c_str());
	if (check != nb || (input[0] != '-' && nb < 0)){
		std::cout << "Invalid int passed" << std::endl;
		return ;
	}
	std::cout << "Int type passed" << std::endl;
	if (nb >=0 && nb <= 255 && nb >= 0 && nb <= 255 && isprint(nb))
		std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
	else
		std::cout << "char : *unprintable*" << std::endl;
	std::cout << "int : " << nb << std::endl;
	std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
	std::cout << "double : " << static_cast<double>(nb) << std::endl << std::endl;
}

int		isDouble( std::string input ){
	if (input.find(".") != std::string::npos && input.find("f") == std::string::npos)
		return (1);
	if (input == "-inf" || input == "+inf" || input == "nan")
		return (1);
	return (0);
}

void	printDouble( std::string input ){
	double nb = atof(input.c_str());
	long long check = atoll(input.c_str());
	if (check != nb || (input[0] != '-' && nb < 0)){
		std::cout << "Invalid int passed" << std::endl;
		return ;
	}
	std::cout << "Double type passed" << std::endl;
	if (input == "-inf" || input == "+inf" || input == "nan"){
		std::cout << "char : *unprintable*" << std::endl;
		std::cout << "int : *unprintable*" << std::endl;
		std::cout << "float : " << input + "f" << std::endl;
		std::cout << "double : " << input << std::endl << std::endl;
	}
	else {
		if (nb >= 0 && nb <= 255 && isprint(nb))
			std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
		else
			std::cout << "char : *unprintable*" << std::endl;
		std::cout << "int : " << static_cast<int>(nb) << std::endl;
		std::cout << "float : " << static_cast<float>(nb) << "f" << std::endl;
		std::cout << "double : " << nb << std::endl << std::endl;
	}
}

int		isFloat( std::string input ){
	if (input.length() > 1 && (isdigit(input[0]) || isdigit(input[1])) && input.find("f") != std::string::npos)
		return (1);
	if (input == "-inff" || input == "+inff" || input == "nanf")
		return (1);
	return (0);
}

void	printFloat( std::string input ){
	float nb = atof(input.c_str());
	long long check = atoll(input.c_str());
	if (check != nb || (input[0] != '-' && nb < 0)){
		std::cout << "Invalid int passed" << std::endl;
		return ;
	}
	std::cout << "Float type passed" << std::endl;
	
	if (input == "-inff" || input == "+inff" || input == "nanf"){
		std::cout << "char : *unprintable*" << std::endl;
		std::cout << "int : *unprintable*" << std::endl;
		std::cout << "float : " << input << std::endl;
		if (input == "-inff")
			std::cout << "double : -inf" << std::endl << std::endl;
		if (input == "+inff")
			std::cout << "double : +inf" << std::endl << std::endl;
		if (input == "nanf")
			std::cout << "double : nan" << std::endl << std::endl;
	}
	else {
		if (nb >= 0 && nb <= 255 && isprint(nb))
			std::cout << "char : '" << static_cast<char>(nb) << "'" << std::endl;
		else
			std::cout << "char : *unprintable*" << std::endl;
		std::cout << "int : " << static_cast<int>(nb) << std::endl;
		std::cout << "float : " << nb << "f" << std::endl;
		std::cout << "double : " << static_cast<double>(nb) << std::endl << std::endl;
	}
}


void ScalarConverter::convert( std::string input ){
	int is_float	= isFloat(input);
	int is_double	= isDouble(input);
	int	is_int		= isInt(input);
	if (!isdigit(input[0]) && isprint(input[0]) && !is_int && !is_double && !is_float)
		printChar(input[0]);
	else if (is_int && !is_double && !is_float)
		printInt(input);
	else if (is_double && !is_float)
		printDouble(input);
	else if (is_float)
		printFloat(input);
}
