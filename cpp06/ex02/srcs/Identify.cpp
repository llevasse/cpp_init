#include "Identify.hpp"

Base* generate(void){
	srand(time(NULL));
	int nb = rand() % 3;
	switch (nb){
		case 1:
			std::cout << "Generate A" << std::endl;
			return (new A());
		case 2:
			std::cout << "Generate B" << std::endl;
			return (new B());
		case 3:
			std::cout << "Generate C" << std::endl;
			return (new C());
	}
	std::cout << "Generate A" << std::endl;
	return (new A());
}
