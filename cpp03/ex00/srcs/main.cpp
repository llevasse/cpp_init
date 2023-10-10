/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 15:52:35 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/10 16:01:50 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int	main(){
	ClapTrap	Elyse;
	ClapTrap	Melisandre = ClapTrap("Melisandre");

	for (int i = 0; i <= 12; i++)
		Melisandre.attack("Elyse");
	for (int i = 0; i < 5; i++)
	{
		if (i % 2)
			Elyse.beRepaired(5);
		else
			Elyse.takeDamage(9);
	}
	Melisandre.takeDamage(42);
}
