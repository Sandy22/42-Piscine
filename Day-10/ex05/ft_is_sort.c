/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:49:41 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/23 17:42:43 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_is_sort(int *tab, int length, int (*f)(int, int))
{
	int res;
	int temp;

	res = 0;
	temp = 0;
	while (length - 1 > 0)
	{
		temp = *tab;
		tab++;
		res = f(temp, *tab);
		if (res > 0)
		{
			return (0);
		}
		length--;
	}
	return (1);
}
