/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:28:36 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/09 21:43:37 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed		a;
	Fixed 		b( 10 );
	Fixed 		c( 42.42f);
	Fixed 		d( b );
	Fixed		e = b + d;

	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "e is " << e << std::endl;

	std::cout << "a is " << a.toInt() << " as interger" << std::endl;
	std::cout << "b is " << b.toInt() << " as interger" << std::endl;
	std::cout << "c is " << c.toInt() << " as interger" << std::endl;
	std::cout << "d is " << d.toInt() << " as interger" << std::endl;
	std::cout << "e is " << e.toInt() << " as interger" << std::endl;
}
