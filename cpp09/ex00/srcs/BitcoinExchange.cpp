#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ){
	std::ifstream	inf("data.csv");
	if (!inf.is_open())
		return ;
	std::string line;
	std::string date;
	float		value;
	std::size_t	found;
	while (getline(inf, line)){
		found = line.find(",");
		if (found == std::string::npos)
			break ;
		date = line.substr(0, found);
		value = atof(line.substr(found + 1).c_str());
		std::cout << date << " " << value << std::endl;
	}
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

bool BitcoinExchange::checkDate( std::string date ){
/*	int	year;
	int	month;
	int	day;
*/
	(void)date;
	return (true);	
}
