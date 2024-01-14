#include "C.hpp"

C::C( void ){
}

C::C( C const &obj){
	if (this != &obj)
		*this = obj;
}

C &C::operator= ( C const &obj){
	(void)obj;
	return (*this);
}

C::~C( void ){
}

std::ostream &operator << (std::ostream &out, const C &obj){
	out << "C";
	(void)obj;
	return (out);
}
