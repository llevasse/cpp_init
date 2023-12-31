/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:08:36 by llevasse          #+#    #+#             */
/*   Updated: 2023/12/31 20:16:04 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat{
	private:
		str::string _name;
	public:
		Bureaucrat( void );
		Bureaucrat( std::string name );
		Bureaucrat( Animal const &obj );
		Bureaucrat operator= ( Animal const &obj );
		~Bureaucrat( void );
};

#endif
