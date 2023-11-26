/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:35 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/25 17:52:21 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int	main(){
	ClapTrap	Elyse;
	ScavTrap	Melisandre = ScavTrap("Melisandre");

	Melisandre.guardGate();
	for (int i = 0; i < 5; i++)
		Elyse.beRepaired(20);
	for (int i = 0; i < 6; i++)
	{
		Melisandre.attack("Elyse");
		Elyse.takeDamage(20);
	}
	Melisandre.takeDamage(99);
	Melisandre.attack("Sinead");
	Melisandre.takeDamage(99);
	Melisandre.attack("Sinead");
}
