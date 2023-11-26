/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/10 20:01:36 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(){
	std::cout << "FragTrap default (with name 'Elyse') constructor called!" << std::endl;
	_name = "Elyse";
	_hp = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap( std::string name ){
	std::cout << "FragTrap constructor called with name '" << name <<"'!" << std::endl;
	_name = name;
	_hp = 100;
	_energy = 100;
	_attack = 30;
}

FragTrap::FragTrap( FragTrap const &obj){
	std::cout << "FragTrap copy constructor called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

FragTrap FragTrap::operator= ( FragTrap const &obj){
	std::cout << "FragTrap copy assignment operator called!" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hp = obj._hp;
		this->_energy = obj._energy;
		this->_attack = obj._attack;
	}
	return (*this);
}

void	FragTrap::highFivesGuys(){
	std::cout << _name << " is legen- wait for it -dary, LEGEN-DARY, HIGH FIVE GUYS" << std::endl;
}

FragTrap::~FragTrap(){
	std::cout << "FragTrap [" << _name << "] destructor called!" << std::endl;
}
