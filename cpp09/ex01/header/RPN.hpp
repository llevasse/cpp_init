#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>

# ifndef MUTE
#  define MUTE 0
# endif

class RPN{
	public:
		RPN( void );
		RPN( RPN const &obj );
		RPN &operator= ( RPN const &obj );
		~RPN( void );
};

std::ostream &operator << (std::ostream &out, const RPN &obj);
#endif
