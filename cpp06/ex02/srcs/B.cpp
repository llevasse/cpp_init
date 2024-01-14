#include "B.hpp"

B::B( void ){
}

B::B( B const &obj){
	if (this != &obj)
		*this = obj;
}

B &B::operator= ( B const &obj){
	(void)obj;
	return (*this);
}

B::~B( void ){
}

std::ostream &operator << (std::ostream &out, const B &obj){
	out << "B";
	(void)obj;
	return (out);
}
