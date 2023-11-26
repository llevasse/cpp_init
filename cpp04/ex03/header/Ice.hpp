/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:28:10 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/26 17:20:29 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

#include "AMateria.hpp"

class Ice : public AMateria{
	public:
		Ice();
		Ice( Ice const &obj);
		Ice& operator=( const Ice &obj);
		~Ice();

		AMateria* close() const;
		void use( ICharacter& target );
};

#endif
