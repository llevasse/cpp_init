#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <stdio.h>
# include <algorithm>

template <typename T>
int	easyFind (T arr, int nb){
	typename T::iterator it;
	it = std::find(arr.begin(), arr.end(), nb);
	if (it != arr.end())
		return (it - arr.begin());
	return (-1);
}

#endif
