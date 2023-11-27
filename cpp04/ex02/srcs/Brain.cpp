/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 14:51:59 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/10 18:42:14 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain( void ){
	std::cout << "Brain default \033[32mconstructor\033[0m called!" << std::endl;
	for (int i=0;i<100;i++)
		ideas[i] = "Empty thoughts";
}

Brain::Brain( std::string ideas ){
	std::cout << "Brain \033[32mconstructor\033[0m called with tought " << ideas << "!" << std::endl;
	for (int i=0;i<100;i++)
		this->ideas[i] = ideas;
}

Brain::Brain( Brain &obj){
	std::cout << "Brain copy \033[32mconstructor\033[0m called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Brain Brain::operator= ( Brain &obj){
	std::cout << "Brain copy assignment operator called!" << std::endl;
	if (this != &obj){
		for (int i=0;i<100;i++)
			this->ideas[i] = obj.ideas[i];
	}
	return (*this);
}

std::string	Brain::getIdea( int id ) {
	if (id >= 0 && id < 100)
		return (ideas[id]);
	return ("(Out of bound getter) \"Empty thoughts\"");
}

void		Brain::setIdea(int id, std::string idea){
	if (id >= 0 && id < 100)
		this->ideas[id] = idea;
}

Brain::~Brain( void ){
	std::cout << "Brain \033[31mdestructor\033[0m called!" << std::endl;
}
