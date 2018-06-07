/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:49:19 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/11 22:38:39 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_putnbr(int nb)
{
	char			outarray[6];
	int				i;
	unsigned int	unint;

	i = 0;
	if (nb < 0)
	{
		unint = nb;
		unint = (nb >= 0 ? nb : -nb);
		nb = unint;
		ft_putchar('-');
	}
	while (nb != 0)
	{
		outarray[i] = (char)(nb % 10) + 48;
		i++;
		nb = nb / 10;
	}
	while (i >= 0)
	{
		ft_putchar(outarray[i]);
		i--;
	}
}

int		main(void)
{
	ft_putnbr(65537);
}
