#include "RPN.hpp"

RPN::RPN( void ){
	if (!MUTE)
		std::cout << "RPN default \033[32mconstructor\033[0m called!" << std::endl;
}

RPN::RPN( RPN const &obj){
	if (!MUTE)
		std::cout << "RPN copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

RPN &RPN::operator= ( RPN const &obj){
	if (!MUTE)
		std::cout << "RPN copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

RPN::~RPN( void ){
	if (!MUTE)
		std::cout << "RPN \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const RPN &obj){
	out << "RPN";
	(void)obj;
	return (out);
}
