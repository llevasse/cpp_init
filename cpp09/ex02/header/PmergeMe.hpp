#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <stdlib.h>
# include <algorithm>
# include <stdio.h>
# include <sys/time.h>

# ifndef MUTE
#  define MUTE 0
# endif

class PmergeMe{
	public:
		double sortVector(int argc, char **argv);
		double sortDeque(int argc, char **argv);
		PmergeMe( void );
		PmergeMe( PmergeMe const &obj );
		PmergeMe &operator= ( PmergeMe const &obj );
		~PmergeMe( void );
};

std::ostream &operator << (std::ostream &out, const PmergeMe &obj);
#endif
