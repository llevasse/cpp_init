#include "BitcoinExchange.hpp"

int main(int argc, char **argv){
	BitcoinExchange btc;
	if (argc < 2){
		std::cerr << "Error : not enough arguments" << std::endl;
		return (1);
	}
	std::ifstream	inf(argv[1]);
	if (!inf.is_open()){
		std::cerr << "Error : can't open file" << std::endl;
		return (1);
	}
	std::string		line;
	getline(inf, line);
	while (getline(inf, line))
		btc.display(line);
}
