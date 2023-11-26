/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:35 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/25 17:58:00 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int	main(){
	ClapTrap	Elyse;
	ScavTrap	Melisandre = ScavTrap("Melisandre");
	FragTrap	Arno = FragTrap("Arno");

	Melisandre.guardGate();
	for (int i = 0; i < 5; i++)
		Elyse.beRepaired(20);
	for (int i = 0; i < 6; i++)
	{
		if (i % 2){
			Melisandre.attack("Elyse");
			Elyse.takeDamage(20);
		}
		else {
			Arno.attack("Elyse");
			Elyse.takeDamage(30);
		}
	}
	Melisandre.takeDamage(99);
	Melisandre.attack("Sinead");
	Melisandre.takeDamage(99);
	Melisandre.attack("Sinead");

	Arno.highFivesGuys();
}
