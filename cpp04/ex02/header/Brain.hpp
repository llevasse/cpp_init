/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/10 11:15:32 by llevasse          #+#    #+#             */
/*   Updated: 2023/11/10 18:30:07 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>

class Brain{
	protected:
		std::string	ideas[100];
	public:
		Brain( void );
		Brain( std::string name );
		Brain( Brain &obj);
		Brain	operator= (Brain &obj);
		virtual ~Brain( void );
		void				setIdea(int id, std::string idea);
		std::string			getIdea(int id);
};

#endif
