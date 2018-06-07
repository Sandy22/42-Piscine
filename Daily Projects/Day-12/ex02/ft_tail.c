/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tail.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/25 12:45:51 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/25 23:27:13 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>
#include "ft.h"

#define BUF_SIZE 4096

int		ft_printtail(int flag, char *argv, int num, char *buf)
{
	int		fd;
	int		ret;

	fd = open(argv, O_RDONLY);
	if (num > 0)
		num = num * -1;
	ret = lseek(fd, num, SEEK_END);
	ret = read(fd, buf, BUF_SIZE);
	buf[ret] = '\0';
	if (flag)
	{
		ft_putstr("==> ");
		ft_putstr(argv);
		ft_putstr(" <==\n");
	}
	ft_putstr(buf);
	if (flag)
		ft_putstr("\n");
	if (close(fd) == -1)
		return (1);
	return (0);
}

int		main(int argc, char **argv)
{
	int		ret;
	int		i;
	int		num;
	int		flag;
	char	buf[BUF_SIZE + 1];

	i = 1;
	flag = 0;
	if (argc == 1)
		while (1)
			ret = read(0, buf, BUF_SIZE);
	if (argv[1][0] == '-' && argv[1][1] == 'c')
	{
		num = ft_atoi(argv[2]);
		i += 2;
	}
	while (i < argc)
	{
		if (i != argc - 1)
			flag = 1;
		ft_printtail(flag, argv[i++], num, buf);
	}
	return (0);
}
