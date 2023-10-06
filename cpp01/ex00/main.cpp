/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/06 22:29:06 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/06 22:54:52 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int	main()
{
	Zombie *eilis;

	eilis = newZombie( "Eilis" );
	randomChump("Greg");
	eilis->announce();
	randomChump("Yeat's");
	eilis->announce();
	randomChump("Sinead");
	eilis->announce();
	delete eilis;
	return (0);
}
