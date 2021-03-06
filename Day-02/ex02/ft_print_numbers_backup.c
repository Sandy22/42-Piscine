/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 23:58:10 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/11 19:37:08 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_numbers(void)
{
	int		i;
	char	ch;

	ch = '0';
	i = 0;
	while (i < 10)
	{
		ft_putchar(ch++);
		i++;
	}
}

int		main(void)
{
	ft_print_numbers();
}
