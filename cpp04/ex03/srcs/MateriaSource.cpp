/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:04:24 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 09:08:31 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource(){
	std::cout << "MateriaSource default constructor called" << std::endl;
	for (int i=0;i<4;i++)
		_slots[i] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const &obj){
	std::cout << "MateriaSource copy constructor called" << std::endl;
	for (int i=0;i<4;i++)
		_slots[i] = NULL;
	if (this != &obj)
		*this = obj;
}
