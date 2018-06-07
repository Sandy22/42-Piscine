/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 00:42:01 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/13 21:21:22 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_iterative_factorial(int nb)
{
	int fact;
	int i;

	if (nb < 0 || nb > 12)
	{
		fact = 0;
	}
	else
	{
		fact = 1;
	}
	i = 1;
	while (i <= nb)
	{
		fact = fact * i;
		i++;
	}
	if (fact < 0)
	{
		fact = 0;
	}
	return (fact);
}
