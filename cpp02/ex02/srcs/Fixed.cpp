/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:15:38 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/18 18:30:42 by llevasse         ###   ########.fr       */
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
	std::cout << "Fixed point float constructor called!" << std::endl;
	nb = roundf(value * (1 << fractBits));
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

Fixed	Fixed::operator+ (const Fixed &obj){
	Fixed temp;
	temp.nb = nb + obj.nb;
	return (temp);
}

Fixed	Fixed::operator- (const Fixed &obj){
	Fixed temp;
	temp.nb = nb - obj.nb;
	return (temp);
}

Fixed	Fixed::operator* (const Fixed &obj){
	Fixed temp;
	temp.nb = nb * obj.toFloat();
	return (temp);
}

Fixed	Fixed::operator/ (const Fixed &obj){
	Fixed temp;
	temp.nb = nb / obj.toFloat();
	return (temp);
}

bool	Fixed::operator > (const Fixed &obj){
	return (nb > obj.nb);
}

bool	Fixed::operator < (const Fixed &obj){
	return (nb < obj.nb);
}

bool	Fixed::operator >= (const Fixed &obj){
	return (nb >= obj.nb);
}

bool	Fixed::operator <= (const Fixed &obj){
	return (nb <= obj.nb);
}

bool	Fixed::operator == (const Fixed &obj){
	return (nb == obj.nb);
}

bool	Fixed::operator != (const Fixed &obj){
	return (nb != obj.nb);
}

Fixed& Fixed::operator ++(){
	nb++;
	return (*this);
}

Fixed Fixed::operator ++ (int){
	Fixed temp = *this;
	nb++;
	return (temp);
}

Fixed& Fixed::operator --(){
	nb--;
	return (*this);
}

Fixed Fixed::operator -- (int){
	Fixed temp = *this;
	nb--;
	return (temp);
}

Fixed &Fixed::min(Fixed &a, Fixed &b){
	return (a < b ? a : b);
}

Fixed &Fixed::max(Fixed &a, Fixed &b){
	return (a > b ? a : b);
}

Fixed const &Fixed::min(const Fixed &a, const Fixed &b){
	return (a.getRawBits() < b.getRawBits() ? a : b);
}

Fixed const &Fixed::max(const Fixed &a, const Fixed &b){
	return (a.getRawBits() > b.getRawBits() ? a : b);
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
