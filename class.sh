cppname="$1.cpp"
hppname=$(echo "$1.hpp" | tr '[:lower:]' '[:upper:]' | tr '.' '_')

## /header
(
mkdir -p header
cd header
echo "#ifndef $hppname
# define $hppname

# include <iostream>

# ifndef MUTE
#  define MUTE 0
# endif

class $1{
	public:
		$1( void );
		$1( $1 const &obj );
		$1 &operator= ( $1 const &obj );
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
	if (!MUTE)
		std::cout << \"$1 default "'\\'"033[32mconstructor"'\\'"033[0m called!\" << std::endl;
}

$1::$1( $1 const &obj){
	if (!MUTE)
		std::cout << \"$1 copy "'\\'"033[32mconstructor"'\\'"033[0m called!\" << std::endl;
	if (this != &obj)
		*this = obj;
}

$1 &$1::operator= ( $1 const &obj){
	if (!MUTE)
		std::cout << \"$1 copy assignment operator called!\" << std::endl;
	(void)obj;
	return (*this);
}

$1::~$1( void ){
	if (!MUTE)
		std::cout << \"$1 "'\\'"033[31mdestructor"'\\'"033[0m called!\" << std::endl;
}

std::ostream &operator << (std::ostream &out, const $1 &obj){
	out << \"$1\";
	(void)obj;
	return (out);
}" > $cppname
)

## Makefile
createMakefile() {
echo "#---COMMON_VAR-----------------------------------
NAME			=	$1
CC				=	c++
RM				=	rm -rf

#---CUB_VAR---------------------------------------
SRC				=	./srcs/$1.cpp\\
\t\t\t\t\t./srcs/main.cpp

OBJS_DIR		=	.OBJS/
OBJS			=	"'$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))'"

HEADER_FILE		=	header/$1.hpp
INCLUDE			=	-I header/

# ----
FLAGS			=	-Wall -Werror -Wextra -std=c++98
DEPS_FLAGS		=	-MMD -MP

#---RULES----------------------------------------

all:			"'$(NAME)

$(NAME):		$(OBJS_DIR) $(HEADER_FILE) $(OBJS)
				$(CC) $(INCLUDE) $(OBJS) -o $@

-include $(DEPS)
$(OBJS_DIR)%.o:	%.cpp $(HEADER_FILE)
				mkdir -p $(shell dirname $@)
				$(CC) $(FLAGS) $(DEPS_FLAGS) $(INCLUDE) -c $< -o $@

$(OBJS_DIR):
				mkdir -p $(OBJS_DIR)

mute:			FLAGS += -D MUTE=1
mute:			re

clean:
				$(RM) $(OBJS_DIR)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re' > Makefile
}

addSrcs(){
	main="\t\t\t\t\t\./srcs/main.cpp"
	cpath="\t\t\t\t\t\./srcs/$1.cpp \\\\"
	sed -i -e "s|$main|$cpath \n$main|g" Makefile
}

if test -f Makefile; then
	addSrcs $1
else
	createMakefile $1
fi


