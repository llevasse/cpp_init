#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <stdlib.h>
# include <algorithm>
# include <stdio.h>

# ifndef MUTE
#  define MUTE 0
# endif

class PmergeMe{
	public:
		void sortVector(int argc, char **argv);
		PmergeMe( void );
		PmergeMe( PmergeMe const &obj );
		PmergeMe &operator= ( PmergeMe const &obj );
		~PmergeMe( void );
};

std::ostream &operator << (std::ostream &out, const PmergeMe &obj);
#endif
