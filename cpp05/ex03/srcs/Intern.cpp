#include "Intern.hpp"

Intern::Intern( void ){
	if (!MUTE)
		std::cout << "Intern default \033[32mconstructor\033[0m called!" << std::endl;
}

Intern::Intern( Intern const &obj){
	if (!MUTE)
		std::cout << "Intern copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Intern &Intern::operator= ( Intern const &obj){
	if (!MUTE)
		std::cout << "Intern copy assignment operator called!" << std::endl;
	(void)obj;
	return (*this);
}

Intern::~Intern( void ){
	if (!MUTE)
		std::cout << "Intern \033[31mdestructor\033[0m called!" << std::endl;
}

AForm *newShrubbery(std::string target){
	return (new ShrubberyCreationForm(target));
}

AForm *newRobotomy(std::string target){
	return (new RobotomyRequestForm(target));
}

AForm *newPresidential(std::string target){
	return (new PresidentialPardonForm(target));
}

AForm *Intern::makeForm( std::string name, std::string target ){
	std::string forms[]					= {"shrubbery creation", "robotomy request","presidential pardon"};
	AForm*	(*ptr[])(std::string)		= {&newShrubbery, &newRobotomy, &newPresidential};

	for (int i=0;i<3;i++){
		if (forms[i] == name){
			if (!MUTE)
		std::cout << "Intern creates " << name << std::endl;
			return (ptr[i](target));
		}
	}
	throw (InvalidFormException());
	return (NULL);
}

const char *Intern::InvalidFormException::what( void ) const throw(){
	return ("Not a valid form");
}

std::ostream &operator << (std::ostream &out, const Intern &obj){
	(void)obj;
	out << "Intern";
	return (out);
}
