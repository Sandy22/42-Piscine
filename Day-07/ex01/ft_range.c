/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 23:17:20 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/18 17:28:52 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_range(int min, int max)
{
	int size;
	int *result;
	int *res;
	int i;
	int temp;

	if (min >= max)
		return ((void*)0);
	temp = min;
	if (min < 0)
		temp = temp * -1;
	if (max < 0)
		max = max * -1;
	size = max + temp + 1;
	result = (int*)malloc(sizeof(int) * (size + 1));
	res = result;
	i = min;
	temp = 0;
	while (temp <= size)
	{
		result[temp] = i;
		i++;
		temp++;
	}
	return (res);
}
