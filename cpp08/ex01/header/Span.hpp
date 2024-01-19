#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <vector>
# include <stdexcept>

# ifndef MUTE
#  define MUTE 0
# endif

class Span{
	private:
		unsigned int			_size;
		std::vector<int>		_vec;
	public:
		Span( void );
		Span( unsigned int n );
		Span( Span const &obj );
		Span &operator= ( Span const &obj );

		void	addNumber( int nb );
		void	addNumber( std::vector<int> range );
		void	addNumber( int *range, int size );
		int		shortestSpan();
		int		longestSpan();

		std::vector<int>	getSpan( void ) const;

		class SpanFullException: public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};
		class EmptySpanException: public std::exception{
			public:
				virtual const char	*what( void ) const throw();
		};

		~Span( void );
};

std::ostream &operator << (std::ostream &out, const Span &obj);
#endif
