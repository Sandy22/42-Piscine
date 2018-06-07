/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display_file.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 11:29:04 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/25 19:45:23 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>
#include "ft.h"

#define BUF_SIZE 4096

int		main(int argc, char **argv)
{
	int		fd;
	int		ret;
	char	buf[BUF_SIZE + 1];

	if (argc == 1)
		ft_putstr("File name missing.\n");
	else if (argc == 2)
	{
		fd = open(argv[1], O_RDONLY);
		ret = read(fd, buf, BUF_SIZE);
		buf[ret] = '\0';
		ft_putstr(buf);
		return (close(fd));
	}
	else if (argc > 2)
		ft_putstr("Too many arguments.\n");
	return (0);
}
