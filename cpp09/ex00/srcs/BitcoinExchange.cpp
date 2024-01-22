#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange( void ){
	std::ifstream	inf("data.csv");
	if (!inf.is_open())
		return ;
	std::string line;
	std::string date;
	float		value;
	std::size_t	found;
	getline(inf,line);
	while (getline(inf, line)){
		found = line.find(",");
		if (found == std::string::npos)
			break ;
		date = line.substr(0, found);
		if (!checkDate(date))
			return ;
		value = atof(line.substr(found + 1).c_str());
		_map[date] = value;
	}
	if (!MUTE)
		std::cout << "BitcoinExchange default \033[32mconstructor\033[0m called!" << std::endl;
}

BitcoinExchange::BitcoinExchange( BitcoinExchange const &obj){
	if (!MUTE)
		std::cout << "BitcoinExchange copy \033[32mconstructor\033[0m called!" << std::endl;
	*this = obj;
}

BitcoinExchange &BitcoinExchange::operator= ( BitcoinExchange const &obj){
	if (!MUTE)
		std::cout << "BitcoinExchange copy assignment operator called!" << std::endl;
	this->_map = obj.getMap();	
	return (*this);
}

float &BitcoinExchange::operator[] ( std::string date ){
	return (_map[date]);
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

std::map<std::string, float> BitcoinExchange::getMap( void ) const{
	return (_map);
}

bool	isLeap(int year){
	return (((year % 4 == 0) && (year % 100)) || (year % 400 == 0));
}

bool	valideDay(int year, int month, int day){
	if (day > 31 || day < 1 || month < 1 || month > 12)
		return (0);
	if (month == 2){
		if (isLeap(year))
			return (day < 30);
		return (day < 29);
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return (day < 31);
	return (1);
}

bool BitcoinExchange::checkDate( std::string date ){
	std::string	year;
	std::string	month;
	std::string	day;
	int	found = date.find("-");
	year = date.substr(0, found);
	found = date.find("-", found + 1);
	month = date.substr(found - 2, 2);
	day = date.substr(found+1);
	if (year.length() != 4 || month.length() != 2 || day.length() != 2 || !valideDay(atoi(year.c_str()), atoi(month.c_str()), atoi(day.c_str())))
		return (false);
	return (true);	
}
