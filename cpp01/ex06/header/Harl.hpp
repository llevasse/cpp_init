/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/08 18:29:11 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/08 19:18:04 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

# include <iostream>

class Harl{
	private:
		void	debug();
		void	info();
		void	warning();
		void	error();
	
	public:
		void	complain( std::string level );
		Harl();
		~Harl();
};
#endif
