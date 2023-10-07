/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/07 20:57:17 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/07 21:03:28 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include <iostream>
# include "Weapon.hpp"

class HumanA{
	private :
		std::string _name;
		Weapon		weapon;
	public	:
		void	attack();
		HumanA(std::string name, Weapon weapon);
		~HumanA();
}

#endif

