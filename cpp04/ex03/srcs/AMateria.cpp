/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 17:04:08 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 10:38:50 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(){
	std::cout << "Default AMateria \033[32mconstructor\033[0m called" << std::endl;
	_type = "neutral";
}

AMateria::AMateria( std::string const & type){
	std::cout << "AMateria \033[32mconstructor\033[0m called with type " << type << std::endl;
	_type = type;
}

AMateria::AMateria( AMateria const &obj){
	std::cout << "AMateria copy \033[32mconstructor\033[0m called" << std::endl;
	if (this != &obj)
		*this = obj;
}

AMateria& AMateria::operator= ( AMateria const &obj){
	std::cout << "AMateria copy assignment called" << std::endl;
	if (this != &obj)
		_type = obj.getType();
	return (*this);
}

std::string const &AMateria::getType() const{
	return (_type);
}

AMateria* AMateria::clone() const{
	return (NULL);
}

void AMateria::use(ICharacter& target){
	(void)target;
}

AMateria::~AMateria(){
	std::cout << "AMateria \033[31mdestructor\033[0m called" << std::endl;
}
