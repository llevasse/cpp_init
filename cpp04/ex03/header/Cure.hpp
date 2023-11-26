/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:28:10 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/26 17:20:34 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

#include "AMateria.hpp"

class Cure : public AMateria{
	public:
		Cure();
		Cure( Cure const &obj);
		Cure& operator=( const Cure &obj);
		~Cure();

		AMateria* close() const;
		void use( ICharacter& target );
};

#endif
