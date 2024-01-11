#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

# include <iostream>

class ScalarConverter{
	public:
		ScalarConverter( void );
		ScalarConverter( ScalarConverter const &obj );
		ScalarConverter &operator= ( ScalarConverter const &obj );
		virtual ~ScalarConverter( void ) = 0;

		static void convert( std::string input);
};

std::ostream &operator << (std::ostream &out, const ScalarConverter &obj);
#endif
