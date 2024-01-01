#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form{
	public:
		Form( void );
		Form( Form const &obj );
		Form operator= ( Form const &obj );
		~Form( void );
};

std::ostream &operator << (std::ostream &out, const Form &obj);
#endif
