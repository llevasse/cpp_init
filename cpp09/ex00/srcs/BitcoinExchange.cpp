#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ){
	if (!MUTE)
		std::cout << "BitcoinExchange default \033[32mconstructor\033[0m called!" << std::endl;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &obj){
	if (!MUTE)
		std::cout << "BitcoinExchange copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

BitcoinExchange &BitcoinExchange::operator= ( BitcoinExchange const &obj){
	if (!MUTE)
		std::cout << "BitcoinExchange copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

BitcoinExchange::~BitcoinExchange( void ){
	if (!MUTE)
		std::cout << "BitcoinExchange \033[31mdestructor\033[0m called!" << std::endl;
}

std::ostream &operator << (std::ostream &out, const BitcoinExchange &obj){
	out << "BitcoinExchange";
	(void)obj;
	return (out);
}
