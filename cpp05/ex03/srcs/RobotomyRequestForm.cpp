#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( void ):AForm("RobotomyRequestForm",72, 45), _target("Mentally ill guy"){
	std::cout << "RobotomyRequestForm default \033[32mconstructor\033[0m called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( std::string target ): AForm("RobotomyRequestForm",72, 45), _target(target){
	std::cout << "RobotomyRequestForm \033[32mconstructor\033[0m called!" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const &obj):AForm(obj.getName(), obj.getSignGrade(), obj.getExecGrade()), _target(obj.getTarget()){
	std::cout << "RobotomyRequestForm copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

RobotomyRequestForm &RobotomyRequestForm::operator= ( RobotomyRequestForm const &obj){
	std::cout << "RobotomyRequestForm copy assignment operator called!" << std::endl;
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm( void ){
	std::cout << "RobotomyRequestForm \033[31mdestructor\033[0m called!" << std::endl;
}

std::string RobotomyRequestForm::getTarget( void ) const{
	return (_target);
}

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const{
	if (!this->getSigned())
		throw (NotSignedException());
	if (executor.getGrade() > this->getExecGrade())
		throw (GradeTooHighException());
	std::cout << "*Drilling noises heard*" << std::endl;
	std::srand(std::time(NULL));
	if (std::rand() % 2)
		std::cout << "Robotomy successfull :D" << std::endl;
	else
		std::cout << "Robotomy failed, " << this->getTarget() << " died :(" << std::endl;

}

std::ostream &operator << (std::ostream &out, const RobotomyRequestForm &obj){
	out << "RobotomyRequestForm : " << std::endl;
	out << "\tname : " << obj.getName() << std::endl;
	out << "\tsigned : " << obj.getSigned() << std::endl;
	out << "\tsign grade : " << obj.getSignGrade() << std::endl;
	out << "\texec grade : " << obj.getExecGrade() << std::endl;
	out << "\ttarget : " << obj.getTarget();
	return (out);
}
