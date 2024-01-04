#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class PresidentialPardonForm : public AForm{
	public:
		PresidentialPardonForm( void );
		PresidentialPardonForm( std::string target );
		PresidentialPardonForm( PresidentialPardonForm const &obj );
		PresidentialPardonForm &operator= ( PresidentialPardonForm const &obj );
		~PresidentialPardonForm( void );
		void	execute(Bureaucrat const &executor) const;

};

std::ostream &operator << (std::ostream &out, const PresidentialPardonForm &obj);
#endif
