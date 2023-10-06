#---COMMON_VAR-----------------------------------
NAME			=	HiThisIsBrain
CC				=	c++
RM				=	rm -rf

#---CUB_VAR---------------------------------------
SRC				=	./main.cpp \

OBJS_DIR		=	.OBJS/
OBJS			=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

# ----
FLAGS			=	-Wall -Werror -Wextra -std=c++98

#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS_DIR) Makefile $(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $@

$(OBJS_DIR)%.o:	%.cpp
				mkdir -p $(shell dirname $@)
				$(CC) $(FLAGS) -c $< -o $@

$(OBJS_DIR):
				mkdir -p $(OBJS_DIR)

clean:
				$(RM) $(OBJS_DIR)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
