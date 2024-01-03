/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:10:40 by llevasse          #+#    #+#             */
/*   Updated: 2024/01/01 16:01:18 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ): _name("recruit"), _grade(150){
	std::cout << "Bureaucrat default \033[32mconstructor\033[0m called!" << std::endl;
}

Bureaucrat::Bureaucrat( const std::string name, int grade ): _name(name){
	std::cout << "Bureaucrat \033[32mconstructor\033[0m called with name " << name << "!" << std::endl;
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( int grade ): _name("recruit"){
	std::cout << "Bureaucrat \033[32mconstructor\033[0m called with grade " << grade << "!" << std::endl;
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	this->_grade = grade;
}

Bureaucrat::Bureaucrat( Bureaucrat const &obj): _name(obj._name){
	std::cout << "Bureaucrat copy \033[32mconstructor\033[0m called!" << std::endl;
	*this = obj;
}

Bureaucrat &Bureaucrat::operator= ( Bureaucrat const &obj){
	std::cout << "Bureaucrat copy assignment operator called!" << std::endl;
	this->_grade = obj._grade;
	return (*this);
}

int	Bureaucrat::getGrade() const{
	return (_grade);
}

void Bureaucrat::incrementGrade(){
	if (_grade - 1 < 1)
		throw (GradeTooHighException());
	_grade--;
}

void Bureaucrat::decrementGrade(){
	if (_grade + 1 > 150)
		throw (GradeTooLowException());
	_grade++;
}

void Bureaucrat::signAForm(AForm &form){
	try {
		form.beSigned(*this);
		std::cout << _name << " signed " << form.getName() << std::endl;
	}
	catch(const std::exception &e){
		std::cerr << _name << " could't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

const char *Bureaucrat::GradeTooHighException::what( void ) const throw(){
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw(){
	return ("Grade too low");
}

std::string	Bureaucrat::getName() const{
	return (_name);
}

std::ostream &operator << (std::ostream &out, const Bureaucrat &obj){
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade() << ".";
	return (out);
}

Bureaucrat::~Bureaucrat( void ){
	std::cout << "Bureaucrat [" << _name << "] \033[31mdestructor\033[0m called!" << std::endl;
}
