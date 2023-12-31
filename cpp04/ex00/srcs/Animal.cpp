/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/09 23:03:12 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ){
	std::cout << "Animal default \033[32mconstructor\033[0m called!" << std::endl;
	type = "unknown";
}

Animal::Animal( std::string type ){
	std::cout << "Animal \033[32mconstructor\033[0m called with type " << type << "!" << std::endl;
	this->type = type;
}

Animal::Animal( Animal const &obj){
	std::cout << "Animal copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Animal Animal::operator= ( Animal const &obj){
	std::cout << "Animal copy assignment operator called!" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

std::string	Animal::getType( void ) const{
	return (type);
}

void		Animal::setType(std::string type){
	this->type = type;
}

void		Animal::makeSound( void ) const{
	std::cout << "*indistiguishable noise*" << std::endl;
}

Animal::~Animal( void ){
	std::cout << "Animal [" << type << "] \033[31mdestructor\033[0m called!" << std::endl;
}
