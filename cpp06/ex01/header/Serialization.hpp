#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <iostream>
# include "Data.hpp"

typedef unsigned long uintptr_t;

class Serialization{
	public:
		Serialization( void );
		Serialization( Serialization const &obj );
		Serialization &operator= ( Serialization const &obj );
		virtual ~Serialization( void ) = 0;

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

std::ostream &operator << (std::ostream &out, const Serialization &obj);
#endif
