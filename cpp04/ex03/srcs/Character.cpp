/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 10:09:13 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 11:13:36 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(){
	std::cout << "Character default \033[32mconstructor\033[0m called" << std::endl;
	_name = "Elyse";
	for (int i=0;i<4;i++) {_slots[i] = NULL;}
}

Character::Character( std::string const & name){
	std::cout << "Character \033[32mconstructor\033[0m called with name " << name << std::endl;
	_name = name;
	for (int i=0;i<4;i++) {_slots[i] = NULL;}
}

Character::Character( Character const &obj){
	std::cout << "Character copy \033[32mconstructor\033[0m called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Character& Character::operator = (Character const &obj){
	std::cout << "Character copy assignment called" << std::endl;
	if (this != &obj){
		_name = obj.getName();
		for (int i=0;i<4;i++) {_slots[i] = obj.getSlot(i)->clone();}
		*this = obj;
	}
	return (*this);
}

AMateria* Character::getSlot(int index) const{
	return (_slots[index]);
}

std::string const & Character::getName() const{
	return (_name);
}

void Character::equip( AMateria *m){
	for (int i=0;i<4;i++){
		if (_slots[i]==NULL){
			_slots[i] = m;
			break ;
		}
	}
}

void Character::unequip( int idx){
	if (idx >= 0 && idx < 4)
		_slots[idx] = NULL;
}

void Character::use( int idx, ICharacter& target){
	if (idx >= 0 && idx < 4 && _slots[idx])
		_slots[idx]->use(target);	
}

Character::~Character(){
	std::cout << "Character \033[31mdestructor\033[0m called" << std::endl;
	for (int i=0;i<4;i++){
		if (_slots[i])
			delete _slots[i];
	}
}
