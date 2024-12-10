NAME = Fixed

SRC = main.cpp fixed.cpp

OBJC = ${SRC:.cpp=.o}

Flags = -Wall -Wextra -Werror -std=c++98

CPP = c++

all: $(NAME)

%.o : %.cpp
	$(CPP) $(Flags) -c $< -o $@

$(NAME) : $(OBJC)
	$(CPP) $(Flags) $(OBJC) -o $(NAME)

clean:
	rm -rf $(OBJC)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY: all clean fclean re
