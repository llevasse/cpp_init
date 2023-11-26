/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/26 16:18:11 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/26 17:20:44 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

#include <iostream>

class IMateriaSource{
	public:
		IMateriaSource();
		IMateriaSource( std::string const & type);
		IMateriaSource( IMateriaSource const &obj);
		IMateriaSource& operator= (IMateriaSource const& obj);
		virtual ~IMateriaSource() {};

		virtual void learnMateria( AMateria*) = 0;
		virtual AMateria* createMateria( std::string const & type) = 0;
};

#endif
