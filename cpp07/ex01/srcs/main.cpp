#include "iter.hpp"

int	diffTo42(int nb){
	return (42 - nb);
}

int main(){
	int	arr[] = {1,2,3,6,12,42};
	const int	carr[] = {1,2,3,6,12,42};
	const int	size = 6;

	iter(arr, 6, diffTo42);	
	std::cout << std::endl;
	iter(carr, size, diffTo42);	
}
