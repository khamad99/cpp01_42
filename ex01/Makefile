
NAME	= zombie

CXXFLAGS		= c++

CXXFLAGS	= -Wall -Werror -Wextra -std=c++98

SRC		= main.cpp Zombie.cpp zombieHorde.cpp

OBJ = $(SRC:%.cpp=%.o)

all		: $(NAME)

$(NAME)	: $(OBJ)
		$(CXX) $(CXXFLAGS) $(OBJ) -o $(NAME)

clean	:
	rm -rf $(OBJ)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.phony	: all clean fclean re