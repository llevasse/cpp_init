#---COMMON_VAR-----------------------------------
NAME			=	UnnecessaryViolence
CC				=	c++
RM				=	rm -rf

#---CUB_VAR---------------------------------------
SRC				=	./srcs/main.cpp \
					./srcs/Weapon.cpp \
					./srcs/HumanA.cpp \
					./srcs/HumanB.cpp \

OBJS_DIR		=	.OBJS/
OBJS			=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))
DEPS			=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.d))

HEADER_FILE		=	./header/Weapon.hpp \
					./header/HumanA.hpp \
					./header/HumanB.hpp \

INCLUDE			=	-I ./header

# ----
FLAGS			=	-Wall -Werror -Wextra -std=c++98
DEPS_FLAGS		=	-MMD -MP

#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS)
				$(CC) $(FLAGS) $(INCLUDE) $(OBJS) -o $@

-include $(DEPS)
$(OBJS_DIR)%.o:	%.cpp
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
