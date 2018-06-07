/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_cat.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 20:50:14 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/25 22:39:45 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdio.h>
#include "ft.h"

#define BUF_SIZE 29

void	ft_stdinput(char *buf)
{
	int		ret;

	while ((ret = read(0, buf, BUF_SIZE)) != 0)
	{
		buf[ret] = '\0';
		ft_putstr(buf);
	}
}

int		ft_readfile(char *input, char *buf)
{
	int ret;
	int fd;

	fd = open(input, O_RDONLY);
	if (fd == -1)
	{
		ft_putstr("./ft_cat: ");
		ft_putstr(input);
		ft_putstr(": No such file or directory\n");
		return (1);
	}
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	ft_putstr(buf);
	if (close(fd) == -1)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		i;
	char	buf[BUF_SIZE + 1];

	i = 1;
	if (argc == 1)
		ft_stdinput(buf);
	else if (argc > 1)
		while (i < argc)
		{
			if (argv[i][0] == '-')
				ft_stdinput(buf);
			else
				ft_readfile(argv[i], buf);
			i++;
		}
	return (0);
}
