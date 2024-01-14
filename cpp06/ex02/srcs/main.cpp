#include "Identify.hpp"

int main(){
	Base *rcg = generate();
	identify(rcg);
	delete rcg;
}
