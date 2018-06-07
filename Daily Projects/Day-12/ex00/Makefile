# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2018/01/23 20:39:56 by smadnaik          #+#    #+#              #
#    Updated: 2018/02/20 14:13:26 by smadnaik         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
SRC = ft_display_file.c ft_putstr.c ft_putchar.c
NAME = ft_display_file

all: compile

compile:
	gcc -Wall -Werror -Wextra *.c -I ./ -o $(NAME)
clean:
	rm -rf $(NAME)
fclean:
	rm -rf $(NAME)
re: fclean all 
