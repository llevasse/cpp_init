#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>

class Form{
	private:
		const std::string	_name;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
	public:
		Form( void );
		Form( Form const &obj );
		Form( std::string name, int signGrade, int execGrade );
		Form operator= ( Form const &obj );
		~Form( void );

		const std::string	getName();
		bool				getSigned();
		const int			getSignGrade();
		const int			getExecGrade();

		class GradeTooHighException: public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
};

std::ostream &operator << (std::ostream &out, const Form &obj);
#endif
