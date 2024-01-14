#include "Identify.hpp"

Base* generate(void){
	srand(time(NULL));
	int nb = rand() % 3;
	switch (nb){
		case 0:
			std::cout << "Generate A" << std::endl;
			return (new A());
		case 1:
			std::cout << "Generate B" << std::endl;
			return (new B());
		case 2:
			std::cout << "Generate C" << std::endl;
			return (new C());
	}
	std::cout << "Generate NULL" << std::endl;
	return (NULL);
}

void identify(Base* p){
	if (!p)
		std::cout << "Type is NULL" << std::endl;
	else if (dynamic_cast<A*>(p))
		std::cout << "Type is A" << std::endl;
	else if (dynamic_cast<B*>(p))
		std::cout << "Type is B" << std::endl;
	else if (dynamic_cast<C*>(p))
		std::cout << "Type is C" << std::endl;
}
void identify(Base& p){
	(void)p;
}
