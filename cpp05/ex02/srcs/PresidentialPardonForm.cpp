#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( void ):AForm("PresidentialPardonForm",25, 5), _target("Edward Snowden"){
	std::cout << "PresidentialPardonForm default \033[32mconstructor\033[0m called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( std::string target ): AForm("PresidentialPardonForm",25, 5), _target(target){
	std::cout << "PresidentialPardonForm \033[32mconstructor\033[0m called!" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const &obj){
	std::cout << "PresidentialPardonForm copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

PresidentialPardonForm &PresidentialPardonForm::operator= ( PresidentialPardonForm const &obj){
	std::cout << "PresidentialPardonForm copy assignment operator called!" << std::endl;
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm( void ){
	std::cout << "PresidentialPardonForm \033[31mdestructor\033[0m called!" << std::endl;
}

std::string PresidentialPardonForm::getTarget( void ) const{
	return (_target);
}

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const{
	if (!this->getSigned())
		throw (NotSignedException());
	if (executor.getGrade() > this->getExecGrade())
		throw (GradeTooHighException());
	std::cout << _target << " has been pardonned by Zaphod Beeblebrox" << std::endl;
}

std::ostream &operator << (std::ostream &out, const PresidentialPardonForm &obj){
	out << "PresidentialPardonForm : " << std::endl;
	out << "\tname : " << obj.getName() << std::endl;
	out << "\tsigned : " << obj.getSigned() << std::endl;
	out << "\tsign grade : " << obj.getSignGrade() << std::endl;
	out << "\texec grade : " << obj.getExecGrade() << std::endl;
	out << "\ttarget : << " << obj.getTarget();
	return (out);
}
