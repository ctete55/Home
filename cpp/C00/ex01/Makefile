

NAME = phone

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPLUS = c++

SRCS = main.cpp \
       PhoneBook.cpp \
       Contact.cpp \

OBJS = $(SRCS:.cpp=.o)

all: $(NAME)

$(NAME): $(OBJS)
	$(CPLUS) $(CFLAGS) $(OBJS) -o $(NAME)

%.o: %.cpp
	$(CPLUS) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

PHONY: all clean fclean re
