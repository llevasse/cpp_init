/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:18:11 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/26 18:19:40 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;

class Character{
	protected:
		std::string _name;
	public:
		Character();
		Character( std::string const & name);
		Character( Character const &obj);
		Character& operator= (Character const& obj);
		virtual ~Character() {};

		virtual std::string const & getName() const = 0;
		virtual void equip( AMateria *m) = 0;
		virtual void unequip( int idx) = 0;
		virtual void use( int idx, Character& target) = 0;
};

#endif
