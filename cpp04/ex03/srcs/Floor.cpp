/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:38:58 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 18:01:30 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Floor.hpp"

Floor::Floor(){
	std::cout << "Floor \033[32mconstructor\033[0m called" << std::endl;
	_next = NULL;
	_addr = NULL;
}

Floor::Floor(AMateria *addr){
	std::cout << "Floor \033[32mconstructor\033[0m with addr called" << std::endl;
	_next = NULL;
	_addr = addr;
}

Floor::Floor( Floor const &obj){
	std::cout << "Floor copy \033[32mconstructor\033[0m called" << std::endl;
	if (this != &obj)
		*this = obj;
}

Floor& Floor::operator = ( Floor const &obj){
	std::cout << "Floor copy assignment called" << std::endl;
	if (this != &obj)
		*this = obj;
	return (*this);
}

void	Floor::addBack(AMateria *addr){
	Floor *tmp = this;
	while (tmp->getNext() != NULL){
		if (addr == tmp->getAddr())
			return ;
		tmp = tmp->getNext();
	}
	tmp->setNext(new Floor(addr));
}

AMateria *Floor::getAddr(){
	return (_addr);
}

void	Floor::setAddr(AMateria *addr){
	_addr = addr;
}

Floor *Floor::getNext(){
	return (_next);
}

void	Floor::setNext(Floor *addr){
	_next = addr;
}

void Floor::deleteLast(){
	if (_next)
		_next->deleteLast();
	delete _addr;
	delete this;
}

Floor::~Floor(){
	std::cout << "Floor \033[31mdestructor\033[0m called" << std::endl;
}
