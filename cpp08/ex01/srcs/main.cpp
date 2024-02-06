#include "Span.hpp"
#include "cstdlib"
#include "ctime"

int	main()
{
	std::srand(std::time(NULL));
	{
		std::cout << std::endl;
		std::cout << "SINGLE addNumber() TESTS" << std::endl;
		Span sp = Span(10);
		for (int i=0;i<10;i++)
			sp.addNumber(std::rand() % 64);
		std::cout << sp << std::endl;
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "VECTOR addNumber() TESTS" << std::endl;
		Span sp = Span(10);
		std::vector<int> vec;
		for (int i=0;i<10;i++)
			vec.push_back(std::rand() % 64);
		sp.addNumber(vec);
		std::cout << sp << std::endl;
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::endl;
		std::cout << "TAB addNumber() TESTS" << std::endl;
		int	tab[10];
		Span sp = Span(10);
		for (int i=0;i<10;i++)
			tab[i] = std::rand() % 64;
		sp.addNumber(tab, 10);
		std::cout << sp << std::endl;
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
	{
		std::cout << std::endl;
		try {
			std::cout << "TO MUCH addNumber() TESTS" << std::endl;
			Span sp = Span(5);
			for (int i=0;i<10;i++)
				sp.addNumber(std::rand());
			std::cout << sp << std::endl;
			std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span : " << sp.longestSpan() << std::endl;
		}
		catch( const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		try {
			std::cout << "NOT ENOUGH addNumber() TESTS" << std::endl;
			Span sp = Span(5);
			sp.addNumber(10);
			std::cout << sp << std::endl;
			std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
			std::cout << "Longest span : " << sp.longestSpan() << std::endl;
		}
		catch( const std::exception &e){
			std::cerr << e.what() << std::endl;
		}
	}
	{
		std::cout << std::endl;
		std::cout << "1 000 000 addNumber() TESTS" << std::endl;
		std::vector<int> vec;
		Span sp = Span(1000000);
		for (int i=0;i<1000000;i++)
			vec.push_back(std::rand());
		sp.addNumber(vec);
		std::cout << "Shortest span : " << sp.shortestSpan() << std::endl;
		std::cout << "Longest span : " << sp.longestSpan() << std::endl;
	}
}
