/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:29:06 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/14 14:07:18 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *horde;
	
	horde = zombieHorde(42, "Eilis");

	for (int i=0;i<42;i++){
		std::cout << i << " : ";
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
