#include "Identify.hpp"

int main(){
	Base *rcg = generate();
	std::cout << "ptr identification : ";
	identify(rcg);
	std::cout << "ref identification : ";
	identify(*rcg);
	delete rcg;
}
