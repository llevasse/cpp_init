#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include <iostream>
# include "AForm.hpp"
# include <cstdlib>
# include <ctime>

class RobotomyRequestForm : public AForm{
	private:
		std::string	_target;
	public:
		RobotomyRequestForm( void );
		RobotomyRequestForm( std::string target );
		RobotomyRequestForm( RobotomyRequestForm const &obj );
		RobotomyRequestForm &operator= ( RobotomyRequestForm const &obj );
		~RobotomyRequestForm( void );
		void	execute(Bureaucrat const &executor) const;

		std::string	getTarget( void ) const;
};

std::ostream &operator << (std::ostream &out, const RobotomyRequestForm &obj);
#endif
