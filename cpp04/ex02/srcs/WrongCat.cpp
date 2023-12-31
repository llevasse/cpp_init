/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/09 23:13:30 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat( void ):WrongAnimal("WrongCat"){
	std::cout << "WrongCat default \033[32mconstructor\033[0m called!" << std::endl;
}

WrongCat::WrongCat( WrongCat const &obj){
	std::cout << "WrongCat copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

WrongCat WrongCat::operator= ( WrongCat const &obj){
	std::cout << "WrongCat copy assignment operator called!" << std::endl;
	if (this != &obj)
		this->type = obj.type;
	return (*this);
}

WrongCat::~WrongCat( void ){
	std::cout << "WrongCat \033[31mdestructor\033[0m is called!" << std::endl;
}

void		WrongCat::makeSound( void ){
	std::cout << "meow meow" << std::endl;
}
