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
}
