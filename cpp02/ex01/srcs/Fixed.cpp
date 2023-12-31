/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:15:38 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/19 13:38:33 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(){
	std::cout << "Fixed point constructor called!" << std::endl;
	nb = 0;
}

Fixed::Fixed(Fixed const &obj){
	std::cout << "Fixed point copy constructor called!" << std::endl;
	if (this != &obj)
		*this = obj;
}

Fixed::Fixed(int const value){
	std::cout << "Fixed point int constructor called!" << std::endl;
	nb = value << fractBits;
}

Fixed::Fixed(float const value){
	nb = roundf(value * (1 << fractBits));
	std::cout << "Fixed point float constructor called!" << nb << std::endl;
}

float	Fixed::toFloat( void ) const{
	return (float(nb) / ( 1 << fractBits));
}

int		Fixed::toInt( void ) const{
	return (nb >> fractBits);
}

Fixed	&Fixed::operator= (const Fixed &obj){
	std::cout << "Fixed point copy assignment operator called!" << std::endl;
	if (this != &obj){
		this->nb = obj.nb;
	}
	return (*this);
}

std::ostream & operator << (std::ostream &out, const Fixed &obj){
	out << obj.toFloat();
	return (out);
}

int	Fixed::getRawBits( void ) const{
	return (nb);
}

void Fixed::setRawBits( int const raw ){
	nb = raw;
}

Fixed::~Fixed(){
	std::cout << "Fixed point destructor called!" << std::endl;
}
