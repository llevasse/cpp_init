#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>

template <typename T>
class Array{
	private:
		unsigned int	_size;
		T				*_array;
	public:
		Array( void ){ _array = new T[0]; _size=0; };
		Array(unsigned int n) { _array = new T[n]; _size = n;}
		Array( Array const &obj );
		Array &operator= ( Array const &obj );

		class OutOfBoundException: public std::exception{
			public:
				virtual const char	*what( void ) const throw(){
					return ("Out of bound\n");
				};
		};
		Array &operator[] ( unsigned int n ) {
			if (n < 0 || n >= _size)
				throw OutOfBoundException();
		}
		~Array( void ) { delete _array; };
};
#endif
