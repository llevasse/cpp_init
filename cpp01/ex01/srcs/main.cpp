/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:29:06 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/15 13:00:23 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *horde;
	int	N	= 5;
	
	horde = zombieHorde(N, "Eilis");

	for (int i=0;i<N;i++){
		std::cout << i << " : ";
		horde[i].announce();
	}
	delete[] horde;
	return (0);
}
