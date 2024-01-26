#ifndef RPN_HPP
# define RPN_HPP

# include <iostream>
# include <stack>

# ifndef MUTE
#  define MUTE 0
# endif

class RPN{
	private:
		std::stack<int>	_stack;
		RPN( void );
	public:
		RPN( std::string operands );
		RPN( RPN const &obj );
		RPN &operator= ( RPN const &obj );
		~RPN( void );

		std::stack<int>	getStack( void ) const;
};

std::ostream &operator << (std::ostream &out, const RPN &obj);
#endif
