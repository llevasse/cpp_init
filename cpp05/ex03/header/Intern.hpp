#ifndef INTERN_HPP
# define INTERN_HPP

# include <iostream>

class Intern{
	public:
		Intern( void );
		Intern( Intern const &obj );
		Intern &operator= ( Intern const &obj );
		~Intern( void );
};

std::ostream &operator << (std::ostream &out, const Intern &obj);
#endif
