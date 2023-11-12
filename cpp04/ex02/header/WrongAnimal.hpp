/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:15:32 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/09 23:17:24 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

# include <iostream>

class WrongAnimal{
	protected:
		std::string	type;
	public:
		WrongAnimal( void );
		WrongAnimal( std::string name );
		WrongAnimal( WrongAnimal const &obj);
		WrongAnimal	operator= (const WrongAnimal &obj);
		~WrongAnimal( void );
		void				setType(std::string type);
		std::string			getType() const;
		void				makeSound() const;
};

#endif
