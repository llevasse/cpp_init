/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:15:38 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/09 14:31:28 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	std::cout << "Fixed point constructor called!" << std::endl;
	nb = 0;
}

Fixed::Fixed(Fixed const &obj){
	std::cout << "Fixed point copy constructor called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Fixed	&Fixed::operator= (const Fixed &obj){
	std::cout << "Fixed point copy assignment operator called!" << std::endl;
	if (this != &obj){
		this->nb = obj.nb;
	}
	return (*this);
}

int	Fixed::getRawBits( void ) const{
	return (nb >> fractBits);
}

void Fixed::setRawBits( int const raw ){
	nb = raw;
}

Fixed::~Fixed(){
	std::cout << "Fixed point destructor called!" << std::endl;
}
