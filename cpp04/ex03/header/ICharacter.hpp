/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ICharacter.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:18:11 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/26 16:38:21 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICHARACTER_HPP
# define ICHARACTER_HPP

#include <iostream>

class ICharacter{
	protected:
		std::string _name;
	public:
		ICharacter();
		ICharacter( std::string const & type);
		ICharacter( ICharacter const &obj);
		ICharacter& operator= (ICharacter const& obj);
		virtual ~ICharacter() {};

		virtual std::string const & getName() const = 0;
		virtual void equip( AMateria *m) = 0;
		virtual void unequip( int idx) = 0;
		virtual void use( int idx, ICharacter& target) = 0;
}

#endif
