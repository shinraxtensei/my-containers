NAME = Contonirz 

SRCS = tester.cpp unit_tests/map_tests.cpp unit_tests/set_tests.cpp  unit_tests/stack_tests.cpp  unit_tests/vector_tests.cpp 
OBJS = $(SRCS:.cpp=.o)

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98


all: $(NAME)

$(NAME): $(OBJS)
	@$(CC) $(CFLAGS) -o $@ $^
	@printf "\n\t\033[1;34mCompilation successful\033[0m\n\n"

run: $(NAME)
	@ ./$(NAME)

clean:
	@rm -f $(OBJS) 

fclean:
	@rm -f $(NAME) $(OBJS) 

re : fclean all

.PHONY: all clean fclean re