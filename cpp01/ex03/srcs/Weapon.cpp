/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:18:05 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/13 19:09:39 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	std::cout << "Weapon constructor called" << std::endl;
	_type = "hands";
}

Weapon::Weapon( std::string type ){
	std::cout << "Weapon constructor called with arg \"" << type << "\"" << std::endl;
	_type = type;
}

void Weapon::setType( std::string type ){
	_type = type;
}

const std::string& Weapon::getType(){
	return _type;
}

Weapon::~Weapon(){
	std::cout << "Weapon destructor called" << std::endl;
}
