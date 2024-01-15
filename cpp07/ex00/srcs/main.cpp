#include "whatever.hpp"

int main(){
	{
		int a = 10;
		int b = 42;
		swap(a, b);
		std::cout << "a : " << a << std::endl;
		std::cout << "b : " << b << std::endl;
		std::cout << "min : " << min(a, b) << std::endl;
		std::cout << "max : " << max(a, b) << std::endl;
	}
	{
		char a = 'b';
		char b = 'a';
		swap(a, b);
		std::cout << "a : " << a << std::endl;
		std::cout << "b : " << b << std::endl;
		std::cout << "min : " << min(a, b) << std::endl;
		std::cout << "max : " << max(a, b) << std::endl;
	}
}
