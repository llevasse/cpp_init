#include "Span.hpp"
#include "cstdlib"
#include "ctime"

int	main()
{
	std::srand(std::time(NULL));
	{
		Span sp = Span(10);
		for (int i=0;i<10;i++)
			sp.addNumber(std::rand() % 64);
		std::cout << sp << std::endl;
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	{
		std::vector<int> vec;
		Span sp = Span(10);
		for (int i=0;i<10;i++)
			vec.push_back(std::rand() % 64);
		sp.addNumber(vec);
		std::cout << sp << std::endl;
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	{
		int	tab[10];
		Span sp = Span(10);
		for (int i=0;i<10;i++)
			tab[i] = std::rand() % 64;
		sp.addNumber(tab, 10);
		std::cout << sp << std::endl;
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
}
