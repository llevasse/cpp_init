/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:08:55 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/07 21:26:12 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB( std::string name){
	std::cout << "HumanB constructor called!" << std::endl;
	this->_name = name;
	this->weapon = NULL;
}

void HumanB::setWeapon(Weapon weapon){
	this->weapon = &weapon;
}

void HumanB::attack(){
	std::cout << this->_name << " attacked with their " << this->weapon->getType() << std::endl;
}

HumanB::~HumanB(){
	std::cout << "HumanB destructor called!" << std::endl;
}
