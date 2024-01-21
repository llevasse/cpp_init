#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# include <iostream>
# include <fstream>

# ifndef MUTE
#  define MUTE 0
# endif

class BitcoinExchange{
	private :
		std::unordered_map<std::string, float> _map;
	public:
		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const &obj );
		BitcoinExchange &operator= ( BitcoinExchange const &obj );
		~BitcoinExchange( void );

		float &operator[] (std::string date);

		class InvalidDateException : public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
};

std::ostream &operator << (std::ostream &out, const BitcoinExchange &obj);
#endif
