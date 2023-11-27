/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Floor.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 17:34:56 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/27 17:58:43 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FLOOR_HPP
# define FLOOR_HPP

#include "AMateria.hpp"

class Floor {
	private:
		AMateria	*_addr;
		Floor		*_next;
	public:
		Floor();
		Floor(AMateria *addr);
		Floor(Floor const &obj);
		Floor& operator = (Floor const &obj);

		void	addBack(AMateria *addr);
		AMateria *getAddr();
		void	setAddr(AMateria *addr);
		Floor	*getNext();
		void	setNext(Floor *addr);
		void	deleteLast();

		~Floor();
};

#endif
