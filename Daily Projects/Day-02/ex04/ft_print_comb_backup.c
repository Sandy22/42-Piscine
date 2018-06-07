/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 00:15:30 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/11 20:34:52 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_comb(void)
{
	char first;
	char second;
	char third;

	first = '0' - 1;
	while (++first <= '9')
	{
		second = first;
		while (++second <= '9')
		{
			third = second;
			while (++third <= '9')
			{
				ft_putchar(first);
				ft_putchar(second);
				ft_putchar(third);
				if (!(first == '7' && second == '8' && third == '9'))
				{
					ft_putchar(',');
					ft_putchar(' ');
				}
			}
		}
	}
}

int		main(void)
{
	ft_print_comb();
	return (0);
}
