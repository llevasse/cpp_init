#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <iostream>

class MutantStack{
	public:
		MutantStack( void );
		MutantStack( MutantStack const &obj );
		MutantStack &operator= ( MutantStack const &obj );
		~MutantStack( void );
};

std::ostream &operator << (std::ostream &out, const MutantStack &obj);
#endif
