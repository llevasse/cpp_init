/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/10 19:20:08 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog( void ):Animal("Dog"){
	std::cout << "Dog default constructor called!" << std::endl;
	brain = new Brain();
}

Dog::Dog( Dog const &obj){
	std::cout << "Dog copy constructor called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Dog Dog::operator= ( Dog const &obj){
	std::cout << "Dog copy assignment operator called!" << std::endl;
	if (this != &obj){
		this->type = obj.type;
		this->brain = obj.brain;
	}
	return (*this);
}

Dog::~Dog( void ){
	delete brain;
	std::cout << "Dog destructor is called!" << std::endl;
}

void		Dog::makeSound( void ) const{
	std::cout << "WOUF WOUF" << std::endl;
}
