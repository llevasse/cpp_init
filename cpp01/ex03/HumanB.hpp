/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 21:09:38 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/07 21:25:57 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanB{
	private :
		std::string _name;
		Weapon		*weapon;
	public	:
		void	attack();
		void	setWeapon(Weapon weapon);
		HumanB(std::string name);
		~HumanB();
};
#endif
