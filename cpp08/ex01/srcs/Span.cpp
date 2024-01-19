#include "Span.hpp"

Span::Span( void ){
	if (!MUTE)
		std::cout << "Span default \033[32mconstructor\033[0m called!" << std::endl;
	_size = 0;
	_vec = std::vector<int>(0);
}

Span::Span( unsigned int n ){
	if (!MUTE)
		std::cout << "Span default \033[32mconstructor\033[0m called!" << std::endl;
	_size = n;
	_vec = std::vector<int>(0);
}

void Span::addNumber( int nb ){
	if (_vec.size() >= _size)
		return ;
	_vec.push_back(nb);
}

void Span::addNumber( std::vector<int> range ){
	if (_vec.size() + range.size() >= _size)
		return ;
	_vec.insert(_vec.begin(), range.begin(), range.end());
}

void Span::addNumber( int *range, int size ){
	if (_vec.size() + size >= _size)
		return ;
	_vec.insert(_vec.begin(), range, range + size);
}

std::vector<int> Span::getSpan( void ) const{
	return (_vec);
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
	std::vector<int> vec = obj.getSpan();
	for (std::vector<int>::iterator it = vec.begin(); it != vec.end(); it++)
		out << *it << " ";
	return (out);
}
