#---COMMON_VAR-----------------------------------
NAME			=	megaphone
CC				=	c++
RM				=	rm -rf

#---CUB_VAR---------------------------------------
SRC				=	megaphone.cpp
OBJS			=	$(SRC:.cpp=.o)

# ----
FLAGS			=	-Wall -Werror -Wextra -std=c++98

#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		Makefile $(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $@

%.o:	%.cpp
				$(CC) $(FLAGS) -c $< -o $@


clean:
				$(RM) $(OBJS)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
