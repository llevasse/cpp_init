#ifndef BITCOINEXCHANGE_HPP
# define BITCOINEXCHANGE_HPP

# ifndef MUTE
#  define MUTE 0
# endif

# include <iostream>

class BitcoinExchange{
	public:
		BitcoinExchange( void );
		BitcoinExchange( BitcoinExchange const &obj );
		BitcoinExchange &operator= ( BitcoinExchange const &obj );
		~BitcoinExchange( void );
};

std::ostream &operator << (std::ostream &out, const BitcoinExchange &obj);
#endif
