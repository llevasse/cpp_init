#include "Span.hpp"
#include "cstdlib"
#include "ctime"

int	main()
{
	std::srand(std::time(NULL));
	{
		Span sp = Span(5);
		for (int i=0;i<5;i++)
			sp.addNumber(std::rand());
		std::cout << sp << std::endl;

	}
	{
		std::vector<int> vec;
		Span sp = Span(5);
		for (int i=0;i<5;i++)
			vec.push_back(std::rand());
		sp.addNumber(vec);
		std::cout << sp << std::endl;

	}
	{
		int	tab[5];
		Span sp = Span(5);
		for (int i=0;i<5;i++)
			tab[i] = std::rand();
		sp.addNumber(tab, 5);
		std::cout << sp << std::endl;

	}
}
