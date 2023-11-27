#---COMMON_VAR-----------------------------------
NAME			=	AMateria
CC				=	c++
RM				=	rm -rf

#---CUB_VAR---------------------------------------
SRC				=	srcs/main.cpp \
					srcs/AMateria.cpp \
					srcs/IMateriaSource.cpp \
					srcs/Ice.cpp \
					srcs/Cure.cpp

OBJS_DIR		=	.OBJS/
OBJS			=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

HEADER_FILE		=	header/AMateria.hpp \
					header/Ice.hpp \
					header/Cure.hpp \
					header/ICharacter.hpp \
					header/IMateriaSource.hpp

INCLUDE			=	-I header/

# ----
FLAGS			=	-Wall -Werror -Wextra -std=c++98
DEPS_FLAGS		=	-MMD -MP

#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS_DIR) $(HEADER_FILE) $(OBJS)
				$(CC) $(FLAGS) $(INCLUDE) $(OBJS) -o $@

-include $(DEPS)
$(OBJS_DIR)%.o:	%.cpp $(HEADER_FILE)
				mkdir -p $(shell dirname $@)
				$(CC) $(FLAGS) $(DEPS_FLAGS) $(INCLUDE) -c $< -o $@

$(OBJS_DIR):
				mkdir -p $(OBJS_DIR)

clean:
				$(RM) $(OBJS_DIR)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
