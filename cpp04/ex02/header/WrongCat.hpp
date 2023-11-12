/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:15:32 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/09 23:11:56 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

# include <iostream>
# include "WrongAnimal.hpp"

class WrongCat : public WrongAnimal{
	public:
		WrongCat( void );
		WrongCat( WrongCat const &obj);
		WrongCat	operator= (const WrongCat &obj);
		~WrongCat( void );
		void	makeSound( void );
};

#endif
