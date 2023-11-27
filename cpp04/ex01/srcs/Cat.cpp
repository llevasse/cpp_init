/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/10 19:20:15 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat( void ):Animal("Cat"){
	std::cout << "Cat default \033[32mconstructor\033[0m called!" << std::endl;
	brain = new Brain();
}

Cat::Cat( Cat const &obj){
	std::cout << "Cat copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Cat Cat::operator= ( Cat const &obj){
	std::cout << "Cat copy assignment operator called!" << std::endl;
	if (this != &obj){
		this->type = obj.type;
		this->brain = obj.brain;
	}
	return (*this);
}

Cat::~Cat( void ){
	delete brain;
	std::cout << "Cat \033[31mdestructor\033[0m is called!" << std::endl;
}

void		Cat::makeSound( void ) const{
	std::cout << "meow meow" << std::endl;
}
