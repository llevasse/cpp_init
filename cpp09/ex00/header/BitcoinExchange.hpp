#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
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

		std::map<std::string, float>	getMap( void ) const;
		std::string						getClosestDate( std::string date );

		class InvalidDateException : public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
};

std::ostream &operator << (std::ostream &out, const BitcoinExchange &obj);
#endif
