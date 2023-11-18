/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:28:36 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/18 18:23:01 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed a;
	Fixed b( a );
	Fixed c;

	c = b;

	std::cout << "a value : " << a.getRawBits() << std::endl;
	a.setRawBits(8);
	std::cout << "a value after setRawBits(8) : " << a.getRawBits() << std::endl;
	std::cout << "b value : " << b.getRawBits() << std::endl;
	std::cout << "c value : " << c.getRawBits() << std::endl;
}
