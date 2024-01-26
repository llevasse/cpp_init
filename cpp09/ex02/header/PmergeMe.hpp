#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>

# ifndef MUTE
#  define MUTE 0
# endif

class PmergeMe{
	public:
		PmergeMe( void );
		PmergeMe( PmergeMe const &obj );
		PmergeMe &operator= ( PmergeMe const &obj );
		~PmergeMe( void );
};

std::ostream &operator << (std::ostream &out, const PmergeMe &obj);
#endif
