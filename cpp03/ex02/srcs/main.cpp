/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:35 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/10 20:03:36 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){
	ClapTrap	Elyse;
	ScavTrap	Melisandre = ScavTrap("Melisandre");
	FragTrap	Arno = FragTrap("Arno");

	Melisandre.guardGate();
	for (int i = 0; i <= 12; i++)
		Melisandre.attack("Elyse");
	for (int i = 0; i < 5; i++)
	{
		if (i % 2)
			Elyse.beRepaired(5);
		else
			Elyse.takeDamage(9);
	}
	Arno.highFivesGuys();
	Melisandre.takeDamage(42);
}
