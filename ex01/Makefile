NAME = phonebook
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Contact.cpp PhoneBook.cpp main.cpp
OBJS = $(SRCS:.cpp=.o)
INCS = Contact.hpp PhoneBook.hpp

all: $(NAME)

$(NAME): $(OBJS) $(INCS)
	@$(CC) $(FLAGS) $(OBJS) -o $(NAME)
	@echo "Executable compiled"

clean:
	@rm -f $(OBJS)
	@echo "Object files deleted"

fclean:
	@rm -f $(NAME)
	@echo "Executable deleted"

re: fclean all

.PHONY: all clean fclean re
