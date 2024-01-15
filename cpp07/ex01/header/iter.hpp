#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>

template <typename T, typename S, typename F> void iter(T *arr, S size, F (*f)(T)){
	for (S i = 0;i < size;i++){
		std::cout << "Return of function with arg " << arr[i] << " : " << f(arr[i]) << std::endl;
	}
}
#endif
