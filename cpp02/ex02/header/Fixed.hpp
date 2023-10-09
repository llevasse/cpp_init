/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/09 09:14:52 by llevasse          #+#    #+#             */
/*   Updated: 2023/10/09 15:46:47 by llevasse         ###   ########.fr       */
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
		Fixed(int const value);
		Fixed(float const value);
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		~Fixed();
		Fixed &operator = (const Fixed &obj);
		friend std::ostream &operator << (std::ostream &out, const Fixed &obj) ;
};

#endif
