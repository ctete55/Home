NAME = Bureaucrat
HEADER = Bureaucrat.hpp
CXXFLAGS = -Wall -Wextra -Werror -std=c++98
CXX = c++
SRC = main.cpp\
		Bureaucrat.cpp
OBJS = $(SRC:.cpp=.o)

all: $(NAME)
$(OBJS): $(HEADER)

$(NAME): $(OBJS)
	$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME)
clean:
	rm -f $(OBJS)
fclean: clean
	rm -f $(NAME)
re: fclean all
PHONY: all clean fclean re
