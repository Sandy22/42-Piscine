# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/24 14:55:13 by smadnaik          #+#    #+#              #
#    Updated: 2018/01/24 14:56:00 by smadnaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRC = ft_cat.c ft_putstr.c ft_putchar.c
NAME = ft_cat

all: compile

compile:
	gcc -Wall -Werror -Wextra *.c -I ./ -o $(NAME)
clean:
	rm -rf $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all 
