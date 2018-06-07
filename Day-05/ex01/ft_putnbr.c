/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 14:21:32 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/16 19:19:34 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char ch);

void	ft_putnbr(int nb)
{
	char c;

	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putnbr(21474);
		ft_putnbr(83648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		ft_putnbr(-nb);
	}
	else if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		c = (nb % 10) + 48;
		ft_putchar(c);
	}
	else
		ft_putchar(nb + 48);
}
