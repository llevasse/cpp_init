/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Account.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/10 15:47:04 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap( void ){
	std::cout << "ClapTrap default constructor called!" << std::endl;
	_name = "Elyse";
}

ClapTrap::ClapTrap( std::string name ){
	std::cout << "ClapTrap constructor called with name '" << name <<"'!" << std::endl;
	_name = name;
}

ClapTrap::ClapTrap( ClapTrap const &obj){
	std::cout << "ClapTrap copy constructor called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

ClapTrap ClapTrap::operator= ( ClapTrap const &obj){
	std::cout << "ClapTrap copy assignment operator called!" << std::endl;
	if (this != &obj)
	{
		this->_name = obj._name;
		this->_hp = obj._hp;
		this->_energy = obj._energy;
		this->_attack = obj._attack;
	}
	return (*this);
}

void	ClapTrap::attack( const std::string& target){
	if (_energy > 0 && _hp > 0)
	{
		std::cout << _name << " deals " << _attack << " damage point to " << target << std::endl;
		_energy--;
	}
	else if (_hp > 0)
		std::cout << _name << " don't have enough energy to attack" << std::endl;
	else
		std::cout << _name << " is dead, it can't do anything" << std::endl;
}

void	ClapTrap::takeDamage( unsigned int amount ){
	if (_hp > 0)
	{
		std::cout << _name << " heals itself of " << amount << "hp" << target << std::endl;
		_hp -= amount;
	}
	else
		std::cout << _name << " is dead, it can't do anything" << std::endl;
}

void	ClapTrap::beRepaired( unsigned int amount ){
	if (_energy > 0 && _hp > 0)
	{
		std::cout << _name << " heals itself of " << amount << "hp" << target << std::endl;
		_hp += amount;
		_energy--;
	}
	else if (_hp > 0)
		std::cout << _name << " don't have enough energy to repair itself" << std::endl;
	else
		std::cout << _name << " is dead, it can't do anything" << std::endl;
}

ClapTrap::~ClapTrap( void ){
	std::cout << "ClapTrap destructor called!" << std::endl;
}
