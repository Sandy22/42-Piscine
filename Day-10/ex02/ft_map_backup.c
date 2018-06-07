/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:22:11 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/23 14:27:11 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
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
	return result;
}

int inc_num(int n)
{
	return n + 5;
}

int main()
{
	int test1[] = {1,2,3,4,5};

	int* res = ft_map(test1, 5, inc_num);
	for (int i = 0; i < 5; i++)
		printf("%d,", res[i]);
	printf("\n");

	free(res);

	int test2[] = {-25,0,20,45};

	res = ft_map(test2, 3, inc_num);
	for (int i = 0; i < 3; i++)
		printf("%d,", res[i]);
	printf("\n");

	free(res);

	int test3[] = {5};

	res = ft_map(test3, 0, inc_num);
	for (int i = 0; i < 0; i++)
		printf("%d,", res[i]);
	printf("\n");

	free(res);

}
