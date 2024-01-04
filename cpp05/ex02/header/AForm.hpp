#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <Bureaucrat.hpp>

class Bureaucrat;
class AForm{
	private:
		const std::string	_name;
		const std::string	_target;
		bool				_signed;
		const int			_signGrade;
		const int			_execGrade;
	public:
		AForm( void );
		AForm( AForm const &obj );
		AForm( std::string name, int signGrade, int execGrade, std::string target );
		AForm &operator= ( AForm const &obj );
		~AForm( void );

		const std::string	getName() const;
		bool				getSigned() const;
		int					getSignGrade() const;
		int					getExecGrade() const;
		std::string			getTarget( void ) const;

		void			beSigned(Bureaucrat &Elise);
		virtual void	execute(Bureaucrat const &executor) const = 0;

		class GradeTooHighException: public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
		class GradeTooLowException: public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
		class NotSignedException: public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
};

std::ostream &operator << (std::ostream &out, const AForm &obj);
#endif
