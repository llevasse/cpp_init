/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 09:04:24 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 11:13:44 by llevasse         ###   ########.fr       */
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

MateriaSource& MateriaSource::operator = ( MateriaSource const &obj){
	std::cout << "MateriaSource copy assignment called" << std::endl;
	for (int i=0;i<4;i++)
		_slots[i] = NULL;
	if (this != &obj){
		for (int i=0;i<4;i++)
			_slots[i] = obj.getSlot(i)->clone();
		*this = obj;
	}
	return (*this);
}

AMateria* MateriaSource::getSlot(int index) const{
	return (_slots[index]);
}

void	MateriaSource::learnMateria( AMateria* materia){
	for (int i=0;i<4;i++){
		if (_slots[i] == NULL){
			_slots[i] = materia;
			break ;
		}
	}
}

AMateria* MateriaSource::createMateria( std::string const & type){
	for (int i=0;i<4;i++){
		if (_slots[i] && _slots[i]->getType() == type){
			return (_slots[i]->clone());
		}
	}
	return (NULL);
}

MateriaSource::~MateriaSource(){
	std::cout << "MateriaSource destructor called" << std::endl;
	for (int i=0;i<4;i++){
		if (_slots[i])
			delete _slots[i];
	}
}
