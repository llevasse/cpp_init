/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:09:13 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 10:18:51 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	std::cout << "Character default constructor called" << std::endl;
	_name = "Elyse";
	for (int i=0;i<4;i++) {_slots[i] = NULL};
}

Character::Character( std::string const & name){
	std::cout << "Character constructor called with name " << name << std::endl;
	_name = name;
	for (int i=0;i<4;i++) {_slots[i] = NULL};
}

Character::Character( Character const &obj){
	std::cout << "Character copy constructor called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Character& Character::operator = (Character const &obj){
	std::cout << "Character copy assignment called" << std::endl;
	if (this != &obj){
		_name = obj.getName();
		for (int i=0;i<4;i++) {_slots[i] = obj.getSlot[i]->clone()};
		*this = obj;
	}
	return (*this)
}

AMteria* Character::getSlot(int index){
	return (_slots[index]);
}

std::string const & getName() const{
	return (_name);
}
