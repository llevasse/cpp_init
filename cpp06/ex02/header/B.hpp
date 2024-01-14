#ifndef B_HPP
# define B_HPP

# include <iostream>
# include "Base.hpp"

class B : public Base{
	public:
		B( void );
		B( B const &obj );
		B &operator= ( B const &obj );
		~B( void );
};

std::ostream &operator << (std::ostream &out, const B &obj);
#endif
