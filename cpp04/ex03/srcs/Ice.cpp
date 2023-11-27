/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:04:08 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 10:33:15 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(){
	std::cout << "Default Ice \033[32mconstructor\033[0m called" << std::endl;
	_type = "ice";
}

Ice::Ice( Ice const &obj){
	std::cout << "Ice copy \033[32mconstructor\033[0m called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Ice& Ice::operator= ( Ice const &obj){
	std::cout << "Ice copy assignment called" << std::endl;
	if (this != &obj)
		_type = "ice";
	return (*this);
}

AMateria* Ice::clone() const{
	return (new Ice());
}

void Ice::use(ICharacter& target){
	std::cout << "* shoot an ice bolt at " << target.getName() << " *" << std::endl;	
}

Ice::~Ice(){
	std::cout << "Ice \033[31mdestructor\033[0m called" << std::endl;
}
