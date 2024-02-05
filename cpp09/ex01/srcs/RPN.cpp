#include "RPN.hpp"

RPN::RPN( void ){
	if (!MUTE)
		std::cout << "RPN default \033[32mconstructor\033[0m called!" << std::endl;
}

void	RPN::do_op( char c ){
	if (_stack.size() < 2)
		throw (InvalidInputException()) ;
	int	first = _stack.top();
	_stack.pop();
	int	sec = _stack.top();
	_stack.pop();
	if (c == '-')
		_stack.push(sec - first);
	else if (c == '+')
		_stack.push(sec + first);
	else if (c == '/'){
		if (first == 0)
			throw (DivisionZeroException());
		_stack.push(sec / first);
	}
	else if (c == '*')
		_stack.push(sec * first);
}
RPN::RPN( std::string operands ){
	if (!MUTE)
		std::cout << "RPN default \033[32mconstructor\033[0m called!" << std::endl;
	solve(operands);
}

void RPN::solve( std::string operands ){
	try {
		for (unsigned int i=0;i<operands.length();i++){
			char	c = operands[i];
			if (isdigit(c))
				_stack.push(c - '0');
			else if (c == '-' || c == '/' || c == '+' || c == '*')
				do_op(c);
			else if (!isspace(c))
				throw (InvalidInputException());
		}
		if (_stack.size() == 1){
			std::cout << _stack.top() << " ";
			_stack.pop();
		}
		else
			throw (InvalidInputException());
		std::cout << std::endl;
	}
	catch (std::exception &e){
		std::cerr << "Error : " << e.what() << std::endl;
	}
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

std::stack<float>	RPN::getStack( void ) const{
	return (_stack);
}

std::ostream &operator << (std::ostream &out, const RPN &obj){
	out << "RPN";
	(void)obj;
	return (out);
}

const	char*RPN::InvalidInputException::what( void ) const throw(){
	return ("Invalid line");
}
const	char*RPN::DivisionZeroException::what( void ) const throw(){
	return ("Division by zero");
}
