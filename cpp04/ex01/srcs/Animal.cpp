/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/10 19:47:19 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal( void ){
	std::cout << "Animal default constructor called!" << std::endl;
	type = "unknown";
}

Animal::Animal( std::string type ){
	std::cout << "Animal constructor called with type " << type << "!" << std::endl;
	this->type = type;
}

Animal::Animal( Animal const &obj){
	std::cout << "Animal copy constructor called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Animal& Animal::operator= ( Animal const& obj) {
	std::cout << "Animal copy assignment operator called!" << std::endl;
	if (this != &obj){
		type = obj.type;
		brain = obj.brain;
	}
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


std::string	Animal::getIdea( int id ) const {
	return (brain->getIdea(id));
}

void		Animal::setIdea(int id, std::string idea) const {
	brain->setIdea(id, idea);
}

Animal::~Animal( void ){
	std::cout << "Animal [" << type << "] destructor called!" << std::endl;
}
