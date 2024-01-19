#include "Span.hpp"

Span::Span( void ){
	if (!MUTE)
		std::cout << "Span default \033[32mconstructor\033[0m called!" << std::endl;
}

Span::Span( Span const &obj){
	if (!MUTE)
		std::cout << "Span copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Span &Span::operator= ( Span const &obj){
	if (!MUTE)
		std::cout << "Span copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

Span::~Span( void ){
	if (!MUTE)
		std::cout << "Span \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const Span &obj){
	out << "Span";
	(void)obj;
	return (out);
}
