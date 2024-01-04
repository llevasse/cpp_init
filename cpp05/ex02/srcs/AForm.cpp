/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:53:24 by llevasse          #+#    #+#             */
/*   Updated: 2024/01/04 14:40:51 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm( void ): _name("basic"), _target("Elise"), _signed(0), _signGrade(150), _execGrade(150){
	std::cout << "AForm default \033[32mconstructor\033[0m called!" << std::endl;
}

AForm::AForm( std::string name, int signGrade, int execGrade, std::string target ): _name(name), _target(target), _signed(0), _signGrade(signGrade), _execGrade(execGrade){
	std::cout << "AForm \033[32mconstructor\033[0m called!" << std::endl;
	if (signGrade < 1)
		throw (GradeTooHighException());
	if (signGrade > 150)
		throw (GradeTooLowException());
	if (execGrade < 1)
		throw (GradeTooHighException());
	if (execGrade > 150)
		throw (GradeTooLowException());
}
AForm::AForm( AForm const &obj): _name(obj._name), _target(obj._target), _signed(0), _signGrade(obj._signGrade), _execGrade(obj._execGrade){
	std::cout << "AForm copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

AForm &AForm::operator= ( AForm const &obj){
	std::cout << "AForm copy assignment operator called!" << std::endl;
	if (this != &obj){
		this->_signed = obj._signed;
	}
	return (*this);
}

AForm::~AForm( void ){
	std::cout << "AForm \033[31mdestructor\033[0m called!" << std::endl;
}

const char *AForm::GradeTooHighException::what( void ) const throw(){
	return ("Grade too high");
}

const char *AForm::GradeTooLowException::what( void ) const throw(){
	return ("Grade too low");
}

const char *AForm::NotSignedException::what( void ) const throw(){
	return ("Not signed");
}

const std::string AForm::getName( void ) const{
	return (_name);
}

bool AForm::getSigned( void ) const{
	return (_signed);
}

int	AForm::getSignGrade( void ) const {
	return (_signGrade);
}

int AForm::getExecGrade( void ) const {
	return (_execGrade);
}

std::string AForm::getTarget( void ) const{
	return (_target);
}

void	AForm::beSigned(Bureaucrat &Elise){
	if (_signGrade >= Elise.getGrade())
		this->_signed = true;
	else
		throw (GradeTooLowException());
}

std::ostream &operator << (std::ostream &out, const AForm &obj){
	out << "AForm : " << std::endl;
	out << "\tname : " << obj.getName() << std::endl;
	out << "\tsigned : " << obj.getSigned() << std::endl;
	out << "\tsign grade : " << obj.getSignGrade() << std::endl;
	out << "\texec grade : " << obj.getExecGrade();
	return (out);
}
