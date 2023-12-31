/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:15:32 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/28 14:35:44 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include "Brain.hpp"

class Animal{
	protected:
		std::string	type;
	public:
		Animal( void );
		Animal( std::string name );
		Animal( Animal const &obj);
		Animal& operator= (Animal const& obj);
		virtual ~Animal( void );
		void				setType(std::string type);
		std::string			getType()	const;
		virtual void		makeSound() const;
		virtual void		setIdea(int id, std::string idea) const;
		virtual std::string	getIdea(int id) const;
};

#endif
