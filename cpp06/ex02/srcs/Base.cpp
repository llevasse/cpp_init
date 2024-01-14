#include "Base.hpp"

Base::Base( void ){
}

Base::Base( Base const &obj){
	if (this != &obj)
		*this = obj;
}

Base &Base::operator= ( Base const &obj){
	(void)obj;
	return (*this);
}

Base::~Base( void ){
}

std::ostream &operator << (std::ostream &out, const Base &obj){
	out << "Base";
	(void)obj;
	return (out);
}
