#---COMMON_VAR-----------------------------------
NAME			=	Animal
CC				=	c++
RM				=	rm -rf

#---CUB_VAR---------------------------------------
SRC				=	./srcs/main.cpp \
					./srcs/Animal.cpp \
					./srcs/WrongAnimal.cpp \
					./srcs/Dog.cpp \
					./srcs/Cat.cpp \
					./srcs/WrongCat.cpp \
					./srcs/Brain.cpp

OBJS_DIR		=	.OBJS/
OBJS			=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

HEADER_FILE		=	header/Animal.hpp \
					header/WrongAnimal.hpp \
					header/Dog.hpp \
					header/Cat.hpp \
					header/WrongCat.hpp \
					header/Brain.hpp

INCLUDE			=	-I header/

# ----
FLAGS			=	-Wall -Werror -Wextra -std=c++98

#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS_DIR) Makefile $(HEADER_FILE) $(OBJS)
				$(CC) $(FLAGS) $(INCLUDE) $(OBJS) -o $@

$(OBJS_DIR)%.o:	%.cpp $(HEADER_FILE)
				mkdir -p $(shell dirname $@)
				$(CC) $(FLAGS) $(INCLUDE) -c $< -o $@

$(OBJS_DIR):
				mkdir -p $(OBJS_DIR)

clean:
				$(RM) $(OBJS_DIR)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
