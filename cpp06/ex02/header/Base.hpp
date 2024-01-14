#ifndef BASE_HPP
# define BASE_HPP

# include <iostream>

class Base{
	public:
		Base( void );
		Base( Base const &obj );
		Base &operator= ( Base const &obj );
		virtual ~Base( void );
};

std::ostream &operator << (std::ostream &out, const Base &obj);
#endif
