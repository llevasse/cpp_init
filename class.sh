cppname="$1.cpp"
hppname=$(echo "$1.hpp" | tr '[:lower:]' '[:upper:]' | tr '.' '_')

## /header
mkdir -p header;
cd header
echo "#ifndef $hppname
# define $hppname

# include <iostream>

class $1{
	public:
		$1( void );
		$1( $1 const &obj );
		$1 operator= ( $1 const &obj );
		~$1( void );
};

#endif" > "$1.hpp"
