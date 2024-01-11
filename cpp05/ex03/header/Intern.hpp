#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>
# include "AForm.hpp"
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern{
	public:
		Intern( void );
		Intern( Intern const &obj );
		Intern &operator= ( Intern const &obj );

		AForm *makeForm( std::string name, std::string target );
		
		class InvalidFormException: public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};

		~Intern( void );
};

std::ostream &operator << (std::ostream &out, const Intern &obj);
#endif
