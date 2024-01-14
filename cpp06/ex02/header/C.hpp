#ifndef C_HPP
# define C_HPP

# include <iostream>
# include "Base.hpp"

class C : public Base{
	public:
		C( void );
		C( C const &obj );
		C &operator= ( C const &obj );
		~C( void );
};

std::ostream &operator << (std::ostream &out, const C &obj);
#endif
