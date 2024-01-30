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

std::string PmergeMe::trim( std::string line ){
	int	beg=0, end=line.length()-1;
	for (; end > 0 && !isalnum(line[end]); end--);
	for (; beg < end && !isalnum(line[beg]); beg++);
	return (line.substr(beg, end+1));
}

void	PmergeMe::sort(int argc, char **argv){
	try {
		double	vecTime = sortVector(argc, argv);
		double	deqTime = sortDeque(argc, argv);

		std::cout << "Vector sorting time of " << (argc - 1) << " elements : " << vecTime << std::endl;
		std::cout << "Deque sorting time of " << (argc - 1) << " elements : " << deqTime << std::endl;
	}
	catch (std::exception &e){
		std::cerr << e.what() << std::endl;
	}
}

void	PmergeMe::mergeVector(std::vector<int> &vec, int left, int mid, int right){
	int	subOne = mid - left + 1, subTwo = right - mid;
	std::vector<int>	vleft (subOne), vright (subTwo);
	
	for (int i=0;i<subOne;i++)
		vleft[i] = vec[left + i];
	for (int i=0;i<subTwo;i++)
		vright[i] = vec[mid + 1 + i];
	int	il=0,ir=0,i=left;
	while (il < subOne && ir < subTwo){
		if (vleft[il] <= vright[ir])
			vec[i] = vleft[il++];
		else
			vec[i] = vright[ir++];
		i++;
	}
	while (il < subOne)
		vec[i++] = vleft[il++];
	while (ir < subTwo)
		vec[i++] = vright[ir++];
}

void	PmergeMe::mergeSortVector(std::vector<int> &vec, int begin, int end){
	if (begin >= end)
		return ;

	int	mid = begin + (end - begin) / 2;
	mergeSortVector(vec, begin, mid);
	mergeSortVector(vec, mid + 1, end);
	mergeVector(vec, begin, mid, end);
}

double	PmergeMe::sortVector( int argc, char **argv ){
	clock_t	t = clock();
	std::vector<int> res;
	std::vector<std::vector<int> > groups ((argc - 1) / 2);
	std::vector<std::vector<int> >::iterator	it = groups.begin();
	for (int i=1;i + 1<argc;i += 2){
		if (!MUTE)
			std::cout << argv[i] << " " << argv[i + 1] << " ";
		if (argv[i][0] == '-' || argv[i + 1][0] == '-')
			throw (NegativeIntException());
		it->push_back(atoi(argv[i]));
		it->push_back(atoi(argv[i + 1]));
		if ((*it)[0] < 0 || (*it)[1] < 0 || trim(argv[i]).length() > 10 || trim(argv[i + 1]).length() > 10)
			throw (IntOverflowException());
		if ((*it)[0] > (*it)[1]){
			int	tmp = (*it)[0];
			(*it)[0] = (*it)[1];
			(*it)[1] = tmp;
		}
		it++;
	}
	if (argc % 2 == 0 && !MUTE)
		std::cout << argv[argc - 1];
	for (unsigned int i=0;i<groups.size();i++)
		res.push_back(groups[i][1]);
	mergeSortVector(res, 0, res.size() - 1);
	for (unsigned int i=0;i<groups.size();i++){
		std::vector<int>::iterator bound = std::find(res.begin(), res.end(), groups[i][1]);
		std::vector<int>::iterator it = std::upper_bound(res.begin(), bound, groups[i][0]);
		if (it == res.end())
			res.push_back(groups[i][0]);
		else
			res.insert(it, groups[i][0]);
	}
	if (argc % 2 == 0){
		int	nb = atoi(argv[argc - 1]);
		if (argv[argc - 1][0] == '-')
			throw (NegativeIntException());
		if (nb < 0 || trim(argv[argc - 1]).length() > 10 )
			throw (IntOverflowException());
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
	t = clock() - t;
	return (((float)t/CLOCKS_PER_SEC) * 1000);
}

void	PmergeMe::mergeDeque(std::deque<int> &vec, int left, int mid, int right){
	int	subOne = mid - left + 1, subTwo = right - mid;
	std::deque<int>	vleft (subOne), vright (subTwo);
	
	for (int i=0;i<subOne;i++)
		vleft[i] = vec[left + i];
	for (int i=0;i<subTwo;i++)
		vright[i] = vec[mid + 1 + i];
	int	il=0,ir=0,i=left;
	while (il < subOne && ir < subTwo){
		if (vleft[il] <= vright[ir])
			vec[i] = vleft[il++];
		else
			vec[i] = vright[ir++];
		i++;
	}
	while (il < subOne)
		vec[i++] = vleft[il++];
	while (ir < subTwo)
		vec[i++] = vright[ir++];
}

void	PmergeMe::mergeSortDeque(std::deque<int> &vec, int begin, int end){
	if (begin >= end)
		return ;

	int	mid = begin + (end - begin) / 2;
	mergeSortDeque(vec, begin, mid);
	mergeSortDeque(vec, mid + 1, end);
	mergeDeque(vec, begin, mid, end);
}

double	PmergeMe::sortDeque( int argc, char **argv ){
	clock_t	t = clock();
	std::deque<int> res;
	std::deque<std::deque<int> > groups ((argc - 1) / 2);
	std::deque<std::deque<int> >::iterator	it = groups.begin();
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
	for (unsigned int i=0;i<groups.size();i++)
		res.push_back(groups[i][1]);
	mergeSortDeque(res, 0, res.size() - 1);
	for (unsigned int i=0;i<groups.size();i++){
		std::deque<int>::iterator bound = std::find(res.begin(), res.end(), groups[i][1]);
		std::deque<int>::iterator it = std::upper_bound(res.begin(), bound, groups[i][0]);
		if (it == res.end())
			res.push_back(groups[i][0]);
		else
			res.insert(it, groups[i][0]);
	}
	if (argc % 2 == 0){
		int	nb = atoi(argv[argc - 1]);
		std::deque<int>::iterator it = std::upper_bound(res.begin(), res.end(), nb);
		if (it == res.end())
			res.push_back(nb);
		else
			res.insert(it, nb);
	}
	t = clock() - t;
	return (((float)t/CLOCKS_PER_SEC) * 1000);
}

const char *PmergeMe::IntOverflowException::what( void ) const throw(){
	return ("Input is over the int limit");
}

const char *PmergeMe::NegativeIntException::what( void ) const throw(){
	return ("Input is a negative int");
}
