
NAME = Referenc

CXXFLAGS =  -Wall -Wextra -Werror -std=c++98

CXX = c++

SRCS = main.cpp\

OBJS = main.o

all: $(NAME)

$(NAME): $(OBJS)
	$(CXX) $(CFLAGS) $(OBJS) -o $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

PHONY: all clean fclean re
