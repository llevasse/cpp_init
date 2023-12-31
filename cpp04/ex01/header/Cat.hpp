/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:15:32 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/28 14:33:57 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include <iostream>
# include "Animal.hpp"
# include "Brain.hpp"

class Cat : public Animal{
	private:
		Brain *brain;
	public:
		Cat( void );
		Cat( Cat const &obj);
		Cat	operator= (const Cat &obj);
		~Cat( void );
		void				setIdea(int id, std::string idea) const;
		std::string			getIdea(int id) const;
		void	makeSound( void ) const;
};

#endif
