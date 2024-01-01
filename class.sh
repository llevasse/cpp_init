cppname="$1.cpp"
hppname=$(echo "$1.hpp" | tr '[:lower:]' '[:upper:]' | tr '.' '_')

## /header
(
mkdir -p header
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

std::ostream &operator << (std::ostream &out, const $1 &obj);
#endif" > "$1.hpp"
)

## /srcs
(
mkdir -p srcs
cd srcs
echo "#include \"$1.hpp\"

$1::$1( void ){
	std::cout << \"$1 default "'\\'"033[32mconstructor"'\\'"033[0m called!\" << std::endl;
}

$1::$1( $1 const &obj){
	std::cout << \"$1 copy "'\\'"033[32mconstructor"'\\'"033[0m called!\" << std::endl;
	if (this != &obj)
		*this = obj;
}

$1 $1::operator= ( $1 const &obj){
	std::cout << \"$1 copy assignment operator called!\" << std::endl;
	return (*this);
}

$1::~$1( void ){
	std::cout << \"$1 "'\\'"033[31mdestructor"'\\'"033[0m called!\" << std::endl;
}

std::ostream &operator << (std::ostream &out, const $1 &obj){
	out << $1;
	return (out);
}" > $cppname
)
