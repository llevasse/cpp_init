/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:18:05 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/07 21:30:26 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(){
	std::cout << "Weapon constructor called" << std::endl;
	this->type = "hands";
}

Weapon::Weapon( std::string type ){
	std::cout << "Weapon constructor called with arg \"" << type << "\"" << std::endl;
	this->type = type;
}

void Weapon::setType( std::string type ){
	this->type = type;
}

const std::string Weapon::getType(){
	return this->type;
}

Weapon::~Weapon(){
	std::cout << "Weapon destructor called" << std::endl;
}
