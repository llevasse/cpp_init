/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:03:38 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/07 21:08:27 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon weapon ){
	std::cout << "HumanA constructor called!" << std::endl;
	this._name = name;
	this.weapon = weapon;
}

HumanA::attack(){
	std::cout << this._name << " attacked with their " << this.weapon.type << std::endl;
}

HumanA::~HumanA(){
	std::cout << "HumanA destructor called!" << std::endl;
}
