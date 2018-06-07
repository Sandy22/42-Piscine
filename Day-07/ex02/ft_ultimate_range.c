/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 23:51:41 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/18 17:36:19 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int *tempptr;
	int res;

	res = 0;
	if (min >= max)
	{
		*range = ((void*)0);
		return (0);
	}
	tempptr = (int*)malloc(sizeof(int) * (max - min));
	while (min < max)
	{
		tempptr[res] = min;
		min++;
		res++;
	}
	*range = tempptr;
	return (res);
}
