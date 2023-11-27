/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:18:11 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 17:24:39 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"

class AMateria;


class Character : public ICharacter{
	protected:
		std::string _name;
		AMateria *_slots[4];
	public:
		Character();
		Character( std::string const & name);
		Character( Character const &obj);
		Character& operator= (Character const& obj);
		~Character();

		std::string const & getName() const;
		AMateria* getSlot(int index) const;

		void equip( AMateria *m);
		void unequip( int idx);			//TODO handle unequiped materia better
		void use( int idx, ICharacter& target);
};

#endif
