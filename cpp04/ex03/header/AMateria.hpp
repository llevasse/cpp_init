/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:18:11 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/26 16:27:56 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

#include <iostream>

class AMateria{
	protected:
		std::string	_type;
	public:
		AMateria();
		AMateria( std::string const & type);
		AMateria( AMateria const &obj);
		AMateria& operator= (AMateria const& obj);
		~AMateria();

		std::string const & getType() const;

		virtual AMateria* clone() const = 0;
		virtual void use(ICharacter& target);
}

#endif
