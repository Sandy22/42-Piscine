# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 20:39:56 by smadnaik          #+#    #+#              #
#    Updated: 2018/01/23 23:12:44 by smadnaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC = do-op.c main.c ft_atoi.c ft_putnbr.c ft_putstr.c ft_putchar.c
NAME = do_op

all: compile

compile:
	gcc -Wall -Werror -Wextra *.c -I ./ -o $(NAME)
clean:
	rm -rf $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all 
