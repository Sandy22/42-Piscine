/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/11 13:49:19 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/11 22:54:12 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putnbr(int nb)
{
	char			outarray[6];
	int				i;

	i = 0;
	if (nb < 0)
	{
		nb = nb * -1;
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
