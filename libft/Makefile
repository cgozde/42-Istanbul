# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cuyar <cuyar@student.42istanbul.com.tr>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/12/07 15:29:41 by cuyar             #+#    #+#              #
#    Updated: 2023/12/07 15:29:44 by cuyar            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC=	ft_isalpha.c

FLAGS=	-Wall -Wextra -Werror
CC=	gcc

NAME=	libft.a

OBJS=	$(SRC:.c=.o)

$(NAME):
	$(CC) $(FLAGS) -c $(SRC)
	ar rcs $(NAME) $(OBJS)


all:	$(NAME)

clean:
	rm -f $(OBJS)
fclean:	clean
	rm -f $(NAME)
re: 
	fclean all
.PHONY:	all, clean, fclean, re
