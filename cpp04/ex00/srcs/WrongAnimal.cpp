/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/09 23:17:17 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal( void ){
	std::cout << "WrongAnimal default constructor called!" << std::endl;
	type = "unknown";
}

WrongAnimal::WrongAnimal( std::string type ){
	std::cout << "WrongAnimal constructor called with type " << type << "!" << std::endl;
	this->type = type;
}

WrongAnimal::WrongAnimal( WrongAnimal const &obj){
	std::cout << "WrongAnimal copy constructor called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongAnimal WrongAnimal::operator= ( WrongAnimal const &obj){
	std::cout << "WrongAnimal copy assignment operator called!" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

std::string	WrongAnimal::getType( void ) const{
	return (type);
}

void		WrongAnimal::setType(std::string type){
	this->type = type;
}

void		WrongAnimal::makeSound( void ) const {
	std::cout << "*indistiguishable noise*" << std::endl;
}

WrongAnimal::~WrongAnimal( void ){
	std::cout << "WrongAnimal [" << type << "] destructor called!" << std::endl;
}
