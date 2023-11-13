/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/05 21:28:15 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/13 18:42:05 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::announce( void ){
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::setName( std::string name ){
	this->name = name;
}

Zombie::Zombie(){
	std::cout << "Zombie constructor called!" << std::endl;
}

Zombie::Zombie( std::string name){
	std::cout << "Zombie constructor called with name " << name << "!" << std::endl;
	this->name = name;
}

Zombie::~Zombie(){
	std::cout << name << " destroyed!" << std::endl;
}
