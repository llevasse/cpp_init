/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:10:40 by llevasse          #+#    #+#             */
/*   Updated: 2024/01/01 01:07:31 by llevasse         ###   ########.fr       */
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

Bureaucrat::Bureaucrat( Bureaucrat const &obj){
	std::cout << "Bureaucrat copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Bureaucrat Bureaucrat::operator= ( Bureaucrat const &obj){
	std::cout << "Bureaucrat copy assignment operator called!" << std::endl;
	if (this != &obj)
		this->_grade = obj._grade;
	return (*this);
}

int	Bureaucrat::getGrade(){
	return (_grade);
}

void Bureaucrat::setGrade(int grade){
	if (grade < 1)
		throw (GradeTooHighException());
	if (grade > 150)
		throw (GradeTooLowException());
	_grade = grade;
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

const char *Bureaucrat::GradeTooHighException::what( void ) const throw(){
	return ("Grade too high");
}

const char *Bureaucrat::GradeTooLowException::what( void ) const throw(){
	return ("Grade too low");
}

Bureaucrat::~Bureaucrat( void ){
	std::cout << "Bureaucrat [" << _name << "] \033[31mdestructor\033[0m called!" << std::endl;
}
