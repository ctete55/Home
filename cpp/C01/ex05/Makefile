
NAME = harls
HEADER = Harl.hpp
CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

CXX= c++

SRCS = main.cpp\
	Harl.cpp

OBJS = main.o\
	Harl.o

all: $(NAME)

$(NAME): $(OBJS) $(HEADER)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

PHONY: all clean fclean re
