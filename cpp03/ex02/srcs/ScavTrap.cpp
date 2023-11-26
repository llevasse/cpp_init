/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/10 16:27:44 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(){
	std::cout << "ScavTrap default (with name 'Elyse') constructor called!" << std::endl;
	_name = "Elyse";
	_hp = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap( std::string name ){
	std::cout << "ScavTrap constructor called with name '" << name <<"'!" << std::endl;
	_name = name;
	_hp = 100;
	_energy = 50;
	_attack = 20;
}

ScavTrap::ScavTrap( ScavTrap const &obj){
	std::cout << "ScavTrap copy constructor called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

ScavTrap ScavTrap::operator= ( ScavTrap const &obj){
	std::cout << "ScavTrap copy assignment operator called!" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hp = obj._hp;
		this->_energy = obj._energy;
		this->_attack = obj._attack;
	}
	return (*this);
}

void	ScavTrap::guardGate(){
	std::cout << _name << " is guarding the gate with their life" << std::endl;
}

ScavTrap::~ScavTrap(){
	std::cout << "ScavTrap [" << _name << "] destructor called!" << std::endl;
}
