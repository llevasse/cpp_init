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
	if (_map.find(date) == _map.end())
		return (_map[getClosestDate(date)]);
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
	if (year < 2009 || year > 2022)
		throw (BitcoinExchange::DateOutOfBoundException());
	if (day > 31 || day < 1 || month < 1 || month > 12 || year < 2009)
		throw (BitcoinExchange::InvalidDateException());
	if (month == 2){
		if (isLeap(year))
			return (day < 30);
		return (day < 29);
	}
	if (month == 4 || month == 6 || month == 9 || month == 11)
		return (day < 31);
	return (1);
}

std::string	decreaseDate( std::string date ){
	int	year = atoi(date.substr(0, 4).c_str());
	int	month = atoi(date.substr(5, 7).c_str());
	int	day = atoi(date.substr(8).c_str());
	std::ostringstream s;
	
	if (day == 1){
		if (month != 1)
			month--;
		else{
			month = 12;
			year--;
		}
		day = 31;
		if (month == 2){
			day = 28;
			if (isLeap(year))
				day = 29;
		}
		else if (month == 4 || month == 6 || month == 9 || month == 11)
			day = 30;
	}
	else
		day--;
	s << year << "-";
	if (month < 10)
		s << "0";
	s << month << "-";
	if (day < 10)
		s << "0";
	s << day;
	return (s.str());
}

std::string	increaseDate( std::string date ){
	int	year = atoi(date.substr(0, 4).c_str());
	int	month = atoi(date.substr(5, 7).c_str());
	int	day = atoi(date.substr(8).c_str());
	std::ostringstream s;
	
	if (day == 31 || (month == 2 && ((isLeap(year) && day == 29) || (!isLeap(year) && day == 28))) || (day == 30 && (month == 4 || month == 6 || month == 9 || month == 11))){
		if (month != 12)
			month++;
		else{
			month = 1;
			year++;
		}
		day = 1;
	}
	else
		day++;
	s << year << "-";
	if (month < 10)
		s << "0";
	s << month << "-";
	if (day < 10)
		s << "0";
	s << day;
	return (s.str());
}

std::string BitcoinExchange::getClosestDate( std::string date ){
	std::string	prev (date);
	std::string next (date);
	int			prevDist=0;
	int			nextDist=0;

	while (_map.find(prev) == _map.end()){
		prevDist++;
		prev = decreaseDate(prev);
	}
	while (_map.find(next) == _map.end()){
		nextDist++;
		next = increaseDate(next);
	}
	return (prevDist > nextDist ? next : prev);	
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
		throw (InvalidDateException());
	return (true);	
}

bool BitcoinExchange::checkValue( std::string val ){
	int	point=0;
	for (unsigned int i=0;i<val.length();i++){
		if (!isdigit(val[i])){
			if (val[i] == '.' && point == 0)
				point++;
			else
				throw (InvalidValueException());
		}
	}
	return (true);
}

void BitcoinExchange::checkLine( std::string line, std::string &date, float &value ){
	if (line.length() < 14)
		throw (InvalidLineException());
	date = line.substr(0, 10);
	if (!checkDate(date))
		throw (InvalidLineException());
	value = atof(line.substr(13).c_str());
	if (value < 0)
		throw (NegativeValueException());
	if (value > 1000)
		throw (TooBigValueException());
	checkValue(line.substr(13));
}

void BitcoinExchange::trim( std::string &line ){
	int	beg=0, end=line.length()-1;
	for (; end > 0 && !isalnum(line[end]); end--);
	for (; beg < end && !isalnum(line[beg]); beg++);
	line = line.substr(beg, end+1);
}

void BitcoinExchange::display( std::string line ){
	trim(line);
	std::string date;
	float		value;
	try {
		checkLine(line, date, value);
		std::cout << date << " => " << value << " = " << (*this)[date] * value << std::endl;
	}
	catch (const std::exception &e){
		std::cerr << "Exception " << e.what() << std::endl;
	}

}

const char *BitcoinExchange::InvalidLineException::what( void ) const throw(){
	return ("Invalid line");
}

const char *BitcoinExchange::InvalidValueException::what( void ) const throw(){
	return ("Invalid value");
}

const char *BitcoinExchange::NegativeValueException::what( void ) const throw(){
	return ("Negative value");
}

const char *BitcoinExchange::TooBigValueException::what( void ) const throw(){
	return ("Value is above limit");
}

const char *BitcoinExchange::InvalidDateException::what( void ) const throw(){
	return ("Invalid date");
}

const char *BitcoinExchange::DateOutOfBoundException::what( void ) const throw(){
	return ("Date is out of bound from registered data");
}
