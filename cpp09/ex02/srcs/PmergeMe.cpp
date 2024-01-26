#include "PmergeMe.hpp"

PmergeMe::PmergeMe( void ){
	if (!MUTE)
		std::cout << "PmergeMe default \033[32mconstructor\033[0m called!" << std::endl;
}

PmergeMe::PmergeMe( PmergeMe const &obj){
	if (!MUTE)
		std::cout << "PmergeMe copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

PmergeMe &PmergeMe::operator= ( PmergeMe const &obj){
	if (!MUTE)
		std::cout << "PmergeMe copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

PmergeMe::~PmergeMe( void ){
	if (!MUTE)
		std::cout << "PmergeMe \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const PmergeMe &obj){
	out << "PmergeMe";
	(void)obj;
	return (out);
}

void	PmergeMe::sortVector( int argc, char **argv ){
//	std::vector<int> res;
	std::vector<std::vector<int> > groups (argc / 2);
	std::vector<std::vector<int> >::iterator	it = groups.begin();
	for (int i=1;i + 1<argc;i += 2){
		it->push_back(atoi(argv[i]));
		it->push_back(atoi(argv[i + 1]));
		if ((*it)[0] > (*it)[1]){
			int	tmp = (*it)[0];
			(*it)[0] = (*it)[1];
			(*it)[1] = tmp;
		}
		it++;
	}
	for (unsigned int i=0;i<groups.size();i++){		//seg fault if odd nb of elements
		std::cout << groups[i][0] << " " << groups[i][1] << " ";
	}
	std::cout << std::endl;
}
