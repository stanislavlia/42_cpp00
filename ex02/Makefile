NAME = banking_transactions
CC = c++
FLAGS = -Wall -Wextra -Werror -std=c++98
SRCS = Account.cpp tests.cpp
OBJS = $(SRCS:.cpp=.o)
INCS = Account.hpp

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
