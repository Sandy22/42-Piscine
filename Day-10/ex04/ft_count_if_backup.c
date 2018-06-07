/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:42:25 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/23 14:46:22 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_count_if(char **tab, int (*f)(char*))
{
	int count;
	int res;

	count = 0;
	res = 0;
	while (*tab != 0)
	{
		res = f(*tab);
		tab++;
		if (res == 1)
		{	
			count++;
			res = 0;
		}
	}
	return (count);
}

int starts_with_z(char* str)
{
	return str[0] == 'z';
}

int main(int argc, char** argv)
{
	printf("%d", ft_count_if(argv + 1, starts_with_z));
	if (argc < 2)
		return 0;
}
