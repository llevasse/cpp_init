/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:08:55 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/08 13:41:17 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name){
	std::cout << "HumanB constructor called!" << std::endl;
	_name = name;
	_weapon = NULL;
}

void HumanB::setWeapon(Weapon &weapon){
	if (_weapon == NULL)
		_weapon = &weapon;
	_weapon->setType(weapon.getType());
}

void HumanB::attack(){
	if (_weapon)
		std::cout << _name << " attacked with their " << _weapon->getType() << std::endl;
	else
		std::cout << _name << " attacked with their own hands" << std::endl;
}

HumanB::~HumanB(){
	std::cout << "HumanB destructor called!" << std::endl;
}
