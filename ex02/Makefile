
NAME	= brain

CC		= c++

FLAGS	= -Wall -Werror -Wextra -std=c++98

SRC		= main.cpp

OBJ = $(SRC:%.c=%.o)

all		: $(NAME)

$(NAME)	: $(OBJ)
		$(CC) $(FLAGS) $(SRC) -o $(NAME)

clean	:
	rm -rf $(NAME)

fclean	: clean
	rm -rf $(NAME)

re		: fclean all

.phony	: all clean fclean re