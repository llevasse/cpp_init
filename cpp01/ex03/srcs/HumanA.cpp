/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:03:38 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/08 13:38:09 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA( std::string name, Weapon & weapon ){
	std::cout << "HumanA constructor called!" << std::endl;
	_name = name;
	_weapon = &weapon;
}

void HumanA::attack(){
	std::cout << _name << " attacked with their " << _weapon->getType() << std::endl;
}

HumanA::~HumanA(){
	std::cout << "HumanA destructor called!" << std::endl;
}
