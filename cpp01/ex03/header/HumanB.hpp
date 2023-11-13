/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:09:38 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/13 19:02:33 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanB{
	private :
		std::string _name;
		Weapon		*_weapon;
	public	:
		void	attack();
		void	setWeapon(Weapon & weapon);
		HumanB(std::string name);
		~HumanB();
};
