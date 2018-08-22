# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: skerlero <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/08/21 02:35:15 by skerlero          #+#    #+#              #
#    Updated: 2018/08/21 02:35:18 by skerlero         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

PATH_SRC = ./srcs/

SRC = $(PATH_SRC)ft_putchar.c \
	$(PATH_SRC)ft_putstr.c \
	$(PATH_SRC)ft_strcmp.c \
	$(PATH_SRC)ft_strlen.c \
	$(PATH_SRC)ft_swap.c \

PATH_INC = ./includes/

INC = $(PATH_INC)ft.h

all : 
	gcc -c -Wall -Wextra -Werror $(SRC)
	gcc -c -I -Wall -Wextra -Werror $(INC)
	ar -rc $(NAME) *.o

clean :
	rm -f *.o

fclean : clean
	rm -f $(NAME)

re : fclean all
