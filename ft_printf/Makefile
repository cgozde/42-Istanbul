CFLAGS = -Wall -Wextra -Werror

CC = gcc

NAME = libftprintf.a

SRC = ft_printf.c ft_printf_utils.c

OBJS = $(SRC:.c=.o)

$(NAME): $(OBJS)
	ar rcs $(NAME) $(OBJS)

all: $(NAME)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re
