#include "ScalarConverter.hpp"

int	main(int argc, char **argv){
	for (int i=1;i<argc;i++)
		ScalarConverter::convert(argv[i]);
}

