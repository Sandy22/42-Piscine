/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:22:11 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/23 14:29:43 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		*ft_map(int *tab, int length, int (*f)(int))
{
	int *result;
	int i;

	i = 0;
	result = (int*)malloc(length * sizeof(int));
	while (length > 0)
	{
		result[i++] = f(*tab++);
		length--;
	}
	return (result);
}
