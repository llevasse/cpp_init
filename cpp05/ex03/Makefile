#---COMMON_VAR-----------------------------------
NAME			=	Interns
CC				=	c++
RM				=	rm -rf

#---CUB_VAR---------------------------------------
SRC				=	./srcs/Bureaucrat.cpp \
					./srcs/AForm.cpp \
					./srcs/ShrubberyCreationForm.cpp \
					./srcs/RobotomyRequestForm.cpp \
					./srcs/PresidentialPardonForm.cpp \
					./srcs/Intern.cpp \
					./srcs/main.cpp

OBJS_DIR		=	.OBJS/
OBJS			=	$(addprefix $(OBJS_DIR), $(SRC:.cpp=.o))

HEADER_FILE		=	./header/Bureaucrat.hpp \
					./header/AForm.hpp \
					./header/ShrubberyCreationForm.hpp \
					./header/RobotomyRequestForm.hpp \
					./header/PresidentialPardonForm.hpp \
					./header/Intern.hpp
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

mute:			FLAGS += -D MUTE=1
mute:			re

clean:
				$(RM) $(OBJS_DIR)

fclean:			clean
				rm -f $(NAME)

re:				fclean all

.PHONY:			all clean fclean re
