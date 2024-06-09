
NAME = megaphone
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = megaphone.cpp


all: $(NAME)

$NAME: SRCS 
	@$(CC) $(FLAGS) -o ($NAME)
	@echo "Executable compiled"

clean:
	@rm $(NAME)
	@echo "Executable deleted"

fclean:
	@rm $(NAME)
	@echo "Executable deleted"
	

.PHONY: all clean re