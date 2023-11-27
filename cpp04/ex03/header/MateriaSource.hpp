/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:18:11 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 11:11:26 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource{
	private :
		AMateria* _slots[4];
	public:
		MateriaSource();
		MateriaSource( MateriaSource const &obj);
		MateriaSource& operator= ( MateriaSource const& obj);
		~MateriaSource();

		AMateria* getSlot(int index) const;
		void learnMateria( AMateria* materia);
		AMateria* createMateria( std::string const & type);
};

#endif
