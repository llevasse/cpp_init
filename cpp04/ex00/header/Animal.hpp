/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:15:32 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/09 22:53:01 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>

class Animal{
	protected:
		std::string	type;
	public:
		Animal( void );
		Animal( std::string name );
		Animal( Animal const &obj);
		Animal	operator= (const Animal &obj);
		virtual ~Animal( void );
		void				setType(std::string type);
		std::string			getType();
		virtual void		makeSound() const;
};

#endif
