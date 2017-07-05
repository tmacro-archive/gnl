NAME = gnl 

LIBFT = libft/

FLAGS=-Wall -Wextra -Werror -fsanitize=address -g

SRC = get_next_line.c \
	   main.c

OBJ = $(SRC:%.c=%.o)

.PHONY: all clean fclean re

all: $(NAME)

$(NAME): $(OBJ)
	gcc -I$(LIBFT) -L$(LIBFT) -lft $(FLAGS) $(OBJ) -o $(NAME)

$(OBJ):
	make -C libft
	gcc $(FLAGS) -I$(LIBFT) -c $(SRC)

clean:
	make -C libft clean
	rm -f $(OBJ)

fclean: clean
	make -C libft fclean
	rm -f $(NAME)

re: fclean all
