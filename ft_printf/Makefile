NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =	ft_printf.c \
	find_arg.c \
	ft_utils.c \
	ft_utils1.c \
	ft_parsing.c \

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
	rm -f $(NAME)
	ar rcs $(NAME) $(OBJ)

%.o: %.c ft_printf.h
		$(CC) $(CFLAGS) -c $< -o $@

clean:
		make clean -C libft
		rm -f $(OBJ)

fclean: clean
		make fclean -C libft
		rm -f $(NAME)

re: fclean
		$(MAKE) all

.PHONY: all clean fclean re