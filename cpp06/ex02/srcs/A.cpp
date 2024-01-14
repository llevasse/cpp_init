#include "A.hpp"

A::A( void ){
}

A::A( A const &obj){
	if (this != &obj)
		*this = obj;
}

A &A::operator= ( A const &obj){
	(void)obj;
	return (*this);
}

A::~A( void ){
}

std::ostream &operator << (std::ostream &out, const A &obj){
	out << "A";
	(void)obj;
	return (out);
}
