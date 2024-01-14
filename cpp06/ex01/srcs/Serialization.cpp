#include "Serialization.hpp"

Serialization::Serialization( void ){
	std::cout << "Serialization default \033[32mconstructor\033[0m called!" << std::endl;
}

Serialization::Serialization( Serialization const &obj){
	std::cout << "Serialization copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Serialization &Serialization::operator= ( Serialization const &obj){
	std::cout << "Serialization copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

Serialization::~Serialization( void ){
	std::cout << "Serialization \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const Serialization &obj){
	out << "Serialization";
	(void)obj;
	return (out);
}

uintptr_t Serialization::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serialization::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data* >(raw));
}
