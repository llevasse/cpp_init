#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include <iostream>
# include "AForm.hpp"

class ShrubberyCreationForm : public AForm{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm( void );
		ShrubberyCreationForm( std::string target );
		ShrubberyCreationForm( ShrubberyCreationForm const &obj );
		ShrubberyCreationForm &operator= ( ShrubberyCreationForm const &obj );
		~ShrubberyCreationForm( void );
		void	execute(Bureaucrat const &executor) const;

		std::string	getTarget( void ) const;
};

std::ostream &operator << (std::ostream &out, const ShrubberyCreationForm &obj);
#endif
