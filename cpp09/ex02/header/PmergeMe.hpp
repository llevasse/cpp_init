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
	private:
		std::string					trim( std::string line );
		std::vector<std::string>	split(int argc, char **argv);
		void						print(std::vector<std::string> vec);
	public:
		void	sort(int argc, char **argv);
		void	mergeSortVector(std::vector<int> &vec, int begin, int end);
		void	mergeVector(std::vector<int> &vec, int begin, int mid, int end);
		double sortVector(std::vector<std::string> argv);
		void	mergeSortDeque(std::deque<int> &vec, int begin, int end);
		void	mergeDeque(std::deque<int> &vec, int begin, int mid, int end);
		double sortDeque(std::vector<std::string> argv);
		PmergeMe( void );
		PmergeMe( PmergeMe const &obj );
		PmergeMe &operator= ( PmergeMe const &obj );
		~PmergeMe( void );
		
		class	IntOverflowException : public std::exception {
			public :
				virtual const char *what( void ) const throw ();
		};
		
		class	NegativeIntException : public std::exception {
			public :
				virtual const char *what( void ) const throw ();
		};
};

std::ostream &operator << (std::ostream &out, const PmergeMe &obj);
#endif
