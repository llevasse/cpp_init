/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:15:32 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/28 14:33:53 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal{
	private:
		Brain *brain;
	public:
		Dog( void );
		Dog( Dog const &obj);
		Dog	operator= (const Dog &obj);
		~Dog( void );
		void				setIdea(int id, std::string idea) const;
		std::string			getIdea(int id) const;
		void	makeSound() const;
};

#endif
