/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:57:17 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/13 19:02:23 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include "Weapon.hpp"

class HumanA{
	private :
		std::string _name;
		Weapon 		_weapon;
	public	:
		void	attack();
		HumanA(std::string name, Weapon & weapon);
		~HumanA();
};
