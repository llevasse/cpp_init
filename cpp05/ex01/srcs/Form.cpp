/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/01 14:53:24 by llevasse          #+#    #+#             */
/*   Updated: 2024/01/01 16:02:58 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( void ): _name("basic"), _signed(0), _signGrade(150), _execGrade(150){
	std::cout << "Form default \033[32mconstructor\033[0m called!" << std::endl;
}

Form::Form( std::string name, int signGrade, int execGrade ): _name(name), _signed(0), _signGrade(signGrade), _execGrade(execGrade){
	std::cout << "Form \033[32mconstructor\033[0m called!" << std::endl;
	if (signGrade < 1)
		throw (GradeTooHighException());
	if (signGrade > 150)
		throw (GradeTooLowException());
	if (execGrade < 1)
		throw (GradeTooHighException());
	if (execGrade > 150)
		throw (GradeTooLowException());
}
Form::Form( Form const &obj): _name(obj._name), _signed(0), _signGrade(obj._signGrade), _execGrade(obj._execGrade){
	std::cout << "Form copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Form &Form::operator= ( Form const &obj){
	std::cout << "Form copy assignment operator called!" << std::endl;
	if (this != &obj){
		this->_signed = obj._signed;
	}
	return (*this);
}

Form::~Form( void ){
	std::cout << "Form \033[31mdestructor\033[0m called!" << std::endl;
}

const char *Form::GradeTooHighException::what( void ) const throw(){
	return ("Grade too high");
}

const char *Form::GradeTooLowException::what( void ) const throw(){
	return ("Grade too low");
}

const std::string Form::getName( void ) const{
	return (_name);
}

bool Form::getSigned( void ) const{
	return (_signed);
}

int	Form::getSignGrade( void ) const {
	return (_signGrade);
}

int Form::getExecGrade( void ) const {
	return (_execGrade);
}

void	Form::beSigned(Bureaucrat Elise){
	if (_signGrade >= Elise.getGrade())
		this->_signed = true;
	else
		throw (GradeTooLowException());
}

std::ostream &operator << (std::ostream &out, const Form &obj){
	out << "Form : " << std::endl;
	out << "\tname : " << obj.getName() << std::endl;
	out << "\tsigned : " << obj.getSigned() << std::endl;
	out << "\tsign grade : " << obj.getSignGrade() << std::endl;
	out << "\texec grade : " << obj.getExecGrade();
	return (out);
}
