#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( void ):AForm("ShrubberyCreationForm",145, 137), _target("Rose"){
	std::cout << "ShrubberyCreationForm default \033[32mconstructor\033[0m called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( std::string target ): AForm("ShrubberyCreationForm",145, 137), _target(target){
	std::cout << "ShrubberyCreationForm \033[32mconstructor\033[0m called!" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const &obj){
	std::cout << "ShrubberyCreationForm copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator= ( ShrubberyCreationForm const &obj){
	std::cout << "ShrubberyCreationForm copy assignment operator called!" << std::endl;
	if (this != &obj)
		this->_target = obj._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm( void ){
	std::cout << "ShrubberyCreationForm \033[31mdestructor\033[0m called!" << std::endl;
}

std::string ShrubberyCreationForm::getTarget( void ) const{
	return (_target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const{
	if (!this->getSigned())
		throw (NotSignedException());
	if (executor.getGrade() > this->getExecGrade())
		throw (GradeTooHighException());
	std::string const out_name = _target + std::string("_shrubbery");
	std::ofstream	outf;
	outf.open(out_name.c_str());
	if 	(!outf.is_open()){	std::cout << "Error in opening output file!" << std::endl; return;}
	outf << "\
              v .   ._, |_  .,\n\
           `-._\\/  .  \\ /    |/_\n\
               \\\\  _\\, y | \\//\n\
         _\\_.___\\\\, \\\\/ -.\\||\n\
           `7-,--.`._||  / / ,\n\
           /'     `-. `./ / |/_.'\n\
                     |    |//\n\
                     |_    /\n\
                     |-   |\n\
                     |   =|\n\
                     |    |\n\
--------------------/ ,  . \\--------._";
	outf.close();
}

std::ostream &operator << (std::ostream &out, const ShrubberyCreationForm &obj){
	out << "ShrubberyCreationForm : " << std::endl;
	out << "\tname : " << obj.getName() << std::endl;
	out << "\tsigned : " << obj.getSigned() << std::endl;
	out << "\tsign grade : " << obj.getSignGrade() << std::endl;
	out << "\texec grade : " << obj.getExecGrade() << std::endl;
	out << "\ttarget : << " << obj.getTarget();
	return (out);
}
