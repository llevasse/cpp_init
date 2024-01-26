#include "RPN.hpp"

RPN::RPN( void ){
	if (!MUTE)
		std::cout << "RPN default \033[32mconstructor\033[0m called!" << std::endl;
}

RPN::RPN( std::string operands ){
	if (!MUTE)
		std::cout << "RPN default \033[32mconstructor\033[0m called!" << std::endl;
	for (unsigned int i=0;i<operands.length();i++){
		char	c = operands[i];
		if (isdigit(c) || c == '-' || c == '/' || c == '+' || c == '*')
			_stack.push(c);
	}
	while (_stack.size()){
		std::cout << (char)_stack.top() << " ";
		_stack.pop();
	}
	std::cout << std::endl;
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
	if (this != &obj)
		this->_stack = obj.getStack();	
	return (*this);
}

RPN::~RPN( void ){
	if (!MUTE)
		std::cout << "RPN \033[31mdestructor\033[0m called!" << std::endl;
}

std::stack<int>	RPN::getStack( void ) const{
	return (_stack);
}

std::ostream &operator << (std::ostream &out, const RPN &obj){
	out << "RPN";
	(void)obj;
	return (out);
}
