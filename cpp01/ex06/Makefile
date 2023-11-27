#---COMMON_VAR-----------------------------------
NAME			=	harlFilter
CC				=	c++
RM				=	rm -rf

#---CUB_VAR---------------------------------------
SRC				=	srcs/main.cpp \
					srcs/Harl.cpp \

OBJS_DIR		=	.OBJS/
OBJS			=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

HEADER_FILE		=	header/Harl.hpp \

INCLUDE			=	-I header

# ----
FLAGS			=	-Wall -Werror -Wextra -std=c++98

#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS_DIR) $(HEADER_FILE) $(OBJS)
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
