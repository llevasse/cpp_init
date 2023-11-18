/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:28:36 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/18 18:33:05 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed		a( 4.2f);
	Fixed 		b( 10 );

	std::cout << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a > b = " << (a > b) << std::endl;
	std::cout << "a < b = " << (a < b) << std::endl;
	std::cout << "a >= b = " << (a >= b) << std::endl;
	std::cout << "a <= b = " << (a <= b) << std::endl;
	std::cout << "a == b = " << (a == b) << std::endl;
	std::cout << "a != b = " << (a != b) << std::endl << std::endl;
	std::cout << "++a = (" << ++a << ")" <<std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = (" << a++ << ")"	<< std::endl;
	std::cout << "a = " << a << std::endl << std::endl;
	std::cout << "--a = (" << --a << ")" <<  std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a-- = (" << a-- << ")" << std::endl;
	std::cout << "a = " << a << std::endl << std::endl;
	std::cout << "min(a,b) " << Fixed::min(a, b) << std::endl;
	std::cout << "max(a,b) " << Fixed::max(a, b) << std::endl << std::endl;

	std::cout << "a + b = " << a + b << std::endl << std::endl;
	std::cout << "a - b = " << a - b << std::endl;
	std::cout << "b - a = " << b - a << std::endl << std::endl;
	std::cout << "a * b = " << a * b << std::endl << std::endl;
	std::cout << "a / b = " << a / b << std::endl;
	std::cout << "b / a = " << b / a << std::endl << std::endl;

	std::cout << std::endl;
}
