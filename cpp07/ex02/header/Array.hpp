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

		Array( Array const &obj ){
			if (this != &obj){
				this->_size = obj.size();
				this->_array = new T[this->_size];
				for (unsigned int i=0;i<this->_size;i++)
					this->_array[i] = obj[i];
			}
		}
		Array( Array &obj ){
			if (this != &obj){
				this->_size = obj.size();
				this->_array = new T[this->_size];
				for (unsigned int i=0;i<this->_size;i++)
					this->_array[i] = obj[i];
			}
		}
		Array &operator= ( Array const &obj ){
			if (this != &obj){
				this->_size = obj.size();
				this->_array = new T[this->_size];
				for (unsigned int i=0;i<this->_size;i++)
					this->_array[i] = obj[i];
			}	
			return (*this);
		}

		class OutOfBoundException: public std::exception{
			public:
				virtual const char	*what( void ) const throw(){
					return ("Out of bound\n");
				};
		};
		T &operator[] ( unsigned int n ) {
			if (n < 0 || n >= _size)
				throw OutOfBoundException();
			return (_array[n]);
		}
		unsigned int size() const{ return _size;};
		~Array( void ) { delete _array; };
};
#endif
