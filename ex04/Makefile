C++ = c++
C++_FLAGS = -Wall -Wextra -Werror
INFILES = main.cpp 
OBJFILES = $(INFILES:.cpp=.o)

NAME = sed_4_losers

all: $(NAME)

$(NAME):$(OBJFILES)
	$(C++) $(C++_FLAGS) $(OBJFILES) -o $(NAME) 

%.o: %.cpp
	$(C++) $(C++_FLAGS) -c $< -o $@

clean:
	rm -f $(OBJFILES)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
