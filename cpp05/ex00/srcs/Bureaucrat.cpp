/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:10:40 by llevasse          #+#    #+#             */
/*   Updated: 2023/12/31 20:16:38 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( void ){
	std::cout << "Bureaucrat default \033[32mconstructor\033[0m called!" << std::endl;
	_name = "unknown";
}

Bureaucrat::Bureaucrat( std::string name ){
	std::cout << "Bureaucrat \033[32mconstructor\033[0m called with name " << name << "!" << std::endl;
	this->_name = name;
}

Bureaucrat::Bureaucrat( Bureaucrat const &obj){
	std::cout << "Bureaucrat copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Bureaucrat Bureaucrat::operator= ( Bureaucrat const &obj){
	std::cout << "Bureaucrat copy assignment operator called!" << std::endl;
	if (this != &obj)
		this->_name = obj._name;
	return (*this);
}

Bureaucrat::~Bureaucrat( void ){
	std::cout << "Bureaucrat [" << _name << "] \033[31mdestructor\033[0m called!" << std::endl;
}
