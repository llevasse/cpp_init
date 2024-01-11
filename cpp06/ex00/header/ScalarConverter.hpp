#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class ScalarConverter{
	public:
		ScalarConverter( void );
		ScalarConverter( ScalarConverter const &obj );
		ScalarConverter &operator= ( ScalarConverter const &obj );
		~ScalarConverter( void );
};

std::ostream &operator << (std::ostream &out, const ScalarConverter &obj);
#endif
