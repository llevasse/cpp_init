#include "whatever.hpp"
#include "iter.hpp"

int	diffTo42(int nb){
	return (42 - nb);
}

int main(){
	int	arr[] = {1,2,3,6,12,42};
	iter(arr, 6, diffTo42);	
}
