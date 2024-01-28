#ifndef PMERGEME_HPP
# define PMERGEME_HPP

# include <iostream>
# include <vector>
# include <deque>
# include <stdlib.h>
# include <algorithm>
# include <stdio.h>
# include <time.h>

# ifndef MUTE
#  define MUTE 0
# endif

class PmergeMe{
	public:
		void	mergeSortVector(std::vector<int> &vec, int begin, int end);
		void	mergeVector(std::vector<int> &vec, int begin, int mid, int end);
		double sortVector(int argc, char **argv);
		void	mergeSortDeque(std::deque<int> &vec, int begin, int end);
		void	mergeDeque(std::deque<int> &vec, int begin, int mid, int end);
		double sortDeque(int argc, char **argv);
		PmergeMe( void );
		PmergeMe( PmergeMe const &obj );
		PmergeMe &operator= ( PmergeMe const &obj );
		~PmergeMe( void );
};

std::ostream &operator << (std::ostream &out, const PmergeMe &obj);
#endif
