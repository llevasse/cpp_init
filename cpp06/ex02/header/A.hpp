#ifndef A_HPP
# define A_HPP

# include <iostream>
# include "Base.hpp"

class A : public Base{
	public:
		A( void );
		A( A const &obj );
		A &operator= ( A const &obj );
		~A( void );
};

std::ostream &operator << (std::ostream &out, const A &obj);
#endif
