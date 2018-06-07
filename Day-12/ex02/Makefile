# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 20:39:56 by smadnaik          #+#    #+#              #
#    Updated: 2018/01/25 22:58:57 by smadnaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC = ft_tail.c ft_putstr.c ft_putchar.c ft_atoi.c
NAME = ft_tail

all: compile

compile:
	gcc -Wall -Werror -Wextra *.c -I ./ -o $(NAME)
clean:
	rm -rf $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all 
