/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/05 18:20:04 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ){
	std::cout << "Cat default constructor called!" << std::endl;
	this->type = "lil guy";
}

Cat::Cat( std::string type ){
	std::cout << "Cat constructor called with name!" << std::endl;
	this->type = type;
}

Cat::Cat( Cat const &obj){
	std::cout << "Cat copy constructor called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat Cat::operator= ( Cat const &obj){
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

Cat::~Cat( void ){
	std::cout << "Cat destructor is called!" << std::endl;
}
