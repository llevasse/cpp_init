/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:04:08 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 10:33:30 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure(){
	std::cout << "Default Cure \033[32mconstructor\033[0m called" << std::endl;
	_type = "cure";
}

Cure::Cure( Cure const &obj){
	std::cout << "Cure copy \033[32mconstructor\033[0m called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cure& Cure::operator= ( Cure const &obj){
	std::cout << "Cure copy assignment called" << std::endl;
	if (this != &obj)
		_type = "cure";
	return (*this);
}

AMateria* Cure::clone() const{
	return (new Cure());
}

void Cure::use(ICharacter& target){
	std::cout << "* heals " << target.getName() << "'s wounds *" << std::endl;	
}

Cure::~Cure(){
	std::cout << "Cure \033[31mdestructor\033[0m called" << std::endl;
}
