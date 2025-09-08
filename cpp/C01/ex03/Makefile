
NAME = carapau
HEADER= Weapon.hpp\
	HumanA.hpp\
	HumanB.hpp
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

CXX = c++

SRCS = main.cpp\
	HumanA.cpp\
	HumanB.cpp\
	Weapon.cpp


OBJS = main.o\
	HumanA.o\
	HumanB.o\
	Weapon.o

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

PHONY: all clean fclean re
