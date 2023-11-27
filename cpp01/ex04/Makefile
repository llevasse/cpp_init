#---COMMON_VAR-----------------------------------
NAME			=	sedIsForLosers
CC				=	c++
RM				=	rm -rf

#---CUB_VAR---------------------------------------
SRC				=	./main.cpp \

OBJS_DIR		=	.OBJS/
OBJS			=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

HEADER_FILE		=	

# ----
FLAGS			=	-Wall -Werror -Wextra -std=c++98

#---RULES----------------------------------------

all:			$(NAME)

$(NAME):		$(OBJS_DIR) $(HEADER_FILE) $(OBJS)
				$(CC) $(FLAGS) $(OBJS) -o $@

$(OBJS_DIR)%.o:	%.cpp $(HEADER_FILE)
				mkdir -p $(shell dirname $@)
				$(CC) $(FLAGS) -c $< -o $@

$(OBJS_DIR):
				mkdir -p $(OBJS_DIR)

clean:
				$(RM) $(OBJS_DIR)

fclean:			clean
				rm -f $(NAME)
				rm -f *.replace

re:				fclean all

.PHONY:			all clean fclean re
