/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 11:38:58 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/13 22:04:12 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int		ft_recursive_power(int nb, int power)
{
	if (power == 0)
	{
		return (1);
	}
	else if (power == 1)
	{
		return (nb);
	}
	else if (power < 0)
	{
		return (0);
	}
	else
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
}

int		main(void)
{
	printf("%d", ft_recursive_power(2, 1000000));
}
