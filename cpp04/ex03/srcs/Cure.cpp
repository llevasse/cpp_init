/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:04:08 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/26 18:15:43 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
	std::cout << "Default Cure constructor called" << std::endl;
	_type = "cure";
}

Cure::Cure( Cure const &obj){
	std::cout << "Cure copy constructor called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cure& Cure::operator= ( Cure const &obj){
	std::cout << "Cure copy assignment called" << std::endl;
	if (this != &obj)
		_type = "cure";
	return (*this);
}

Cure* Cure::clone() const{
	return (new Cure());
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;	
}

Cure::~Cure(){
	std::cout << "Cure destructor called" << std::endl;
}
