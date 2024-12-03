BLUE=\e[1;94m
RED=\e[1;91m
RESET=\033[0m

NAME = polymorphism

CC = c++

CFLAGS = -Wall -Wextra -Werror -Wshadow -std=c++98

SRC = main.cpp Animal.cpp Cat.cpp Dog.cpp WrongAnimal.cpp WrongCat.cpp

OBJS = $(SRC:.cpp=.o)

%.o: %.cpp Animal.hpp Cat.hpp Dog.hpp WrongAnimal.hpp WrongCat.hpp
	$(CC) $(CFLAGS) -c $< -o $@

all: $(NAME)

$(NAME) : $(OBJS)
		$(CC) $(CFLAGS) $(OBJS) -o $(NAME)
		@echo "$(NAME): $(BLUE)$(OBJS) was created $(RESET)"

clean:
		rm -f $(OBJS)
		@echo "$(NAME): $(RED)$(OBJS) was deleted $(RESET)"

fclean: clean
		rm -f $(NAME)
		@echo "$(RED)$(NAME) was deleted $(RESET)"

re: fclean all
		@echo "$(BLUE) let's do it again! XD :) :O .|. .|. $(RESET)"

.PHONY: all clean fclean re