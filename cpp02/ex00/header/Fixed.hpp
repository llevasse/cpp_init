/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:14:52 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/09 14:16:03 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed{
	private :
		int					nb;
		static const int	fractBits = 8;
	public	:
		Fixed();
		Fixed(Fixed const &obj);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		~Fixed();
		Fixed &operator = (const Fixed &obj);


};

#endif
