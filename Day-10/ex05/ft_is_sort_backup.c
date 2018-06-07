/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_sort.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:49:41 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/23 17:41:12 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
		printf("Tab = %d && %d\nRes = %d\n", temp, *tab, res);
		if (res > 0)
		{
			return (0);
		}
		length--;
	}
	return (1);
}

int cmpnbr(int a, int b)
{
	return a - b;
}

int main(int argc, char** argv)
{
	if (argc < 1)
		return 0;
	int test[argc - 1];
	for (int i = 1; i < argc; i++)
		test[i - 1] = atoi(argv[i]);

	printf("%d", ft_is_sort(test, argc - 1, cmpnbr));
}
