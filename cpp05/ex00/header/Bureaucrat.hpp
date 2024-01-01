/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llevasse <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/31 20:08:36 by llevasse          #+#    #+#             */
/*   Updated: 2024/01/01 13:41:27 by llevasse         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>

class Bureaucrat{
	private:
		std::string const	_name;
		int					_grade;
	public:
		Bureaucrat( void );
		Bureaucrat( const std::string name, int grade);
		Bureaucrat( int grade);
		Bureaucrat( Bureaucrat const &obj );
		Bureaucrat operator= ( Bureaucrat const &obj );
		~Bureaucrat( void );

		int		getGrade( void ) const;

		void	incrementGrade( void );
		void	decrementGrade( void );

		std::string	getName( void ) const;

		class GradeTooHighException: public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
};

std::ostream &operator << (std::ostream &out, const Bureaucrat &obj);

#endif
