/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/03 22:38:09 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/13 19:02:42 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Weapon
{
	private:
		std::string _type;

	public:
		void setType( std::string type );
		const std::string getType();
		Weapon *duplicate( Weapon weapon );
		Weapon();
		Weapon(std::string type);
		~Weapon();
};
