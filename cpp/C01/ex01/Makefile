
NAME = Zombie
HEADER = Zombie.hpp
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

CXX = c++

SRCS = main.cpp\
	Zombie.cpp\
	zombieHorde.cpp\

OBJS = main.o\
	Zombie.o\
	zombieHorde.o\

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

PHONY: all clean fclean re
