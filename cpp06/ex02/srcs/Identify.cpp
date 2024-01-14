#include "Identify.hpp"

Base* generate(void){
	srand(time(NULL));
	int nb = rand() % 3;
	switch (nb){
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
	}
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
	try {
		(void)dynamic_cast<A&>(p);
		std::cout << "Type is A" << std::endl;
	}
	catch (const std::exception& e){
		(void)e;
	};
	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "Type is B" << std::endl;
	}
	catch (const std::exception& e){
		(void)e;
	};
	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "Type is C" << std::endl;
	}
	catch (const std::exception& e){
		(void)e;
	};
}
