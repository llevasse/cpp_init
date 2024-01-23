#include "BitcoinExchange.hpp"

int main(){
	BitcoinExchange btc;
	std::ifstream	inf("input.txt");
	std::string		line;
	getline(inf, line);
	while (getline(inf, line))
		btc.display(line);
}
