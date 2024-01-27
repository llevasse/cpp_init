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

double	PmergeMe::sortVector( int argc, char **argv ){
	time_t	start = time(NULL);
	std::vector<int> res;
	std::vector<std::vector<int> > groups ((argc - 1) / 2);
	std::vector<std::vector<int> >::iterator	it = groups.begin();
	for (int i=1;i + 1<argc;i += 2){
		if (!MUTE)
			std::cout << argv[i] << " " << argv[i + 1] << " ";
		it->push_back(atoi(argv[i]));
		it->push_back(atoi(argv[i + 1]));
		if ((*it)[0] > (*it)[1]){
			int	tmp = (*it)[0];
			(*it)[0] = (*it)[1];
			(*it)[1] = tmp;
		}
		it++;
	}
	res.push_back(groups[0][1]);
	res.push_back(groups[1][1]);
	if (res[0] > res[1]){
		int	tmp = (res)[0];
		(res)[0] = (res)[1];
		(res)[1] = tmp;
	}
	for (unsigned int i=2;i<groups.size();i++){
		std::vector<int>::iterator it = std::upper_bound(res.begin(), res.end(), groups[i][1]);
		if (it == res.end())
			res.push_back(groups[i][1]);
		else
			res.insert(it, groups[i][1]);
	}
	for (unsigned int i=0;i<groups.size();i++){
		std::vector<int>::iterator it = std::upper_bound(res.begin(), res.end(), groups[i][0]);
		if (it == res.end())
			res.push_back(groups[i][0]);
		else
			res.insert(it, groups[i][0]);
	}
	if (argc % 2 == 0){
		int	nb = atoi(argv[argc - 1]);
		std::cout << argv[argc - 1];
		std::vector<int>::iterator it = std::upper_bound(res.begin(), res.end(), nb);
		if (it == res.end())
			res.push_back(nb);
		else
			res.insert(it, nb);
	}
	if (!MUTE){
		std::cout << std::endl;
		for (unsigned int i=0;i<res.size();i++)
			std::cout << res[i] << " ";
		std::cout << std::endl;
	}
	return (difftime(time(NULL), start));
}

double	PmergeMe::sortDeque( int argc, char **argv ){
	time_t	start = time(NULL);
	std::deque<int> res;
	std::deque<std::deque<int> > groups ((argc - 1) / 2);
	std::deque<std::deque<int> >::iterator	it = groups.begin();
	for (int i=1;i + 1<argc;i += 2){
		if (!MUTE)
			std::cout << argv[i] << " " << argv[i + 1] << " ";
		it->push_back(atoi(argv[i]));
		it->push_back(atoi(argv[i + 1]));
		if ((*it)[0] > (*it)[1]){
			int	tmp = (*it)[0];
			(*it)[0] = (*it)[1];
			(*it)[1] = tmp;
		}
		it++;
	}
	res.push_back(groups[0][1]);
	res.push_back(groups[1][1]);
	if (res[0] > res[1]){
		int	tmp = (res)[0];
		(res)[0] = (res)[1];
		(res)[1] = tmp;
	}
	for (unsigned int i=2;i<groups.size();i++){
		std::deque<int>::iterator it = std::upper_bound(res.begin(), res.end(), groups[i][1]);
		if (it == res.end())
			res.push_back(groups[i][1]);
		else
			res.insert(it, groups[i][1]);
	}
	for (unsigned int i=0;i<groups.size();i++){
		std::deque<int>::iterator it = std::upper_bound(res.begin(), res.end(), groups[i][0]);
		if (it == res.end())
			res.push_back(groups[i][0]);
		else
			res.insert(it, groups[i][0]);
	}
	if (argc % 2 == 0){
		int	nb = atoi(argv[argc - 1]);
		std::cout << argv[argc - 1];
		std::deque<int>::iterator it = std::upper_bound(res.begin(), res.end(), nb);
		if (it == res.end())
			res.push_back(nb);
		else
			res.insert(it, nb);
	}
	if (!MUTE){
		std::cout << std::endl;
		for (unsigned int i=0;i<res.size();i++)
			std::cout << res[i] << " ";
		std::cout << std::endl;
	}
	return (difftime(time(NULL), start));
}
