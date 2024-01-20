#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# ifndef MUTE
#  define MUTE 0
# endif

# include <iostream>
# include <stack>
# include <iterator>

template <typename T>
class MutantStack : public std::stack<T>{
	public:
		MutantStack( void ) {};
		MutantStack( MutantStack const &obj ) {*this = obj;};
		MutantStack &operator= ( MutantStack const &obj ) {
			if (this != &obj)
				this->c = obj.c;
			return (*this);
		};
		~MutantStack( void ) {};

		typedef typename std::stack<T>::container_type::iterator	iterator;

		iterator	begin( void ) {return (this->c.begin());};
		iterator	end( void ) {return (this->c.end());};
};

#endif
