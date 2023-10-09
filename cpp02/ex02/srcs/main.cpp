/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 14:28:36 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/09 22:07:01 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	Fixed		a( 42.016f);
	Fixed 		b( 42 );

	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "a > b is " << (a > b) << std::endl;
	std::cout << "a < b is " << (a < b) << std::endl;
	std::cout << "a >= b is " << (a >= b) << std::endl;
	std::cout << "a <= b is " << (a <= b) << std::endl;
	std::cout << "a == b is " << (a == b) << std::endl;
	std::cout << "a != b is " << (a != b) << std::endl;
}
