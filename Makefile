NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC =   ft_printf.c \
        # tus otros archivos

OBJ = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(OBJ)
        make -C libft
        cp libft/libft.a .
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