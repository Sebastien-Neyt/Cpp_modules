NAME = violence

SRCS = main.cpp\
	   HumanA.cpp\
	   HumanB.cpp\
	   Weapon.cpp
SRCS_DIR = ./

INCS_DIR = HumanA.hpp\
		   HumanB.hpp\
		   Weapon.hpp
OBJ = $(SRCS:.cpp=.o)
OBJS_DIR = objects/
OBJS = $(addprefix $(OBJS_DIR), $(OBJ))

FLAGS = -Wall -Werror -Wextra -std=c++98

COLOUR_RED = \033[0;31m
COLOUR_GREEN = \033[0;32m
COLOUR_YELLOW = \033[33m
COLOUR_RESET = \033[0m

$(OBJS_DIR)%.o:	$(SRCS_DIR)%.cpp
	@mkdir -p $(OBJS_DIR)
	@echo "$(COLOUR_GREEN)[COMPILING] ...$(COLOUR_RESET)"
	@clang++ $(FLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	@clang++ $(FLAGS) -o $(NAME) $(OBJS)

all:	$(NAME)

clean:
	@echo "$(COLOUR_YELLOW)[CLEANING]: $(OBJS_DIR) $(COLOUR_RESET)"
	@rm -rf $(OBJS_DIR)

fclean:	clean
	@echo "$(COLOUR_YELLOW)[CLEANING]: $(NAME) $(COLOUR_RESET)"
	@rm -f $(NAME)

re:	fclean all

	
