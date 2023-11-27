#---COMMON_VAR-----------------------------------
NAME			=	phoneBook
CC				=	c++
RM				=	rm -rf

#---CUB_VAR---------------------------------------
SRC				=	srcs/Contact.cpp \
					srcs/PhoneBook.cpp
OBJS_DIR		=	.OBJS/
OBJS			=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

HEADER_DIR		=	headers/
HEADER_FILE		=	headers/PhoneBook.hpp
INCLUDE			=	-I $(HEADER_DIR)

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
