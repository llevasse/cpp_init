#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <algorithm>
# include <string>
# include <fstream>
# include <map>
# include <stdlib.h>
# include <sstream>

# ifndef MUTE
#  define MUTE 0
# endif

class BitcoinExchange{
	private :
		std::map<std::string, float> _map;
	public:
		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const &obj );
		BitcoinExchange &operator= ( BitcoinExchange const &obj );
		~BitcoinExchange( void );

		float &operator[] (std::string date);

		bool	checkDate(std::string date);
		bool	checkValue(std::string val);

		std::map<std::string, float>	getMap( void ) const;
		std::string						getClosestDate( std::string date );

		void	display( std::string line );
		void	checkLine( std::string line, std::string &date, float &value );
		void	trim( std::string &line );

		class InvalidLineException : public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
		class InvalidValueException : public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
		class InvalidDateException : public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
		class DateOutOfBoundException : public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
};

std::ostream &operator << (std::ostream &out, const BitcoinExchange &obj);
#endif
