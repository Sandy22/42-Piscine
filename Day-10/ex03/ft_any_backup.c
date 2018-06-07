/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_any.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 14:30:53 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/23 14:40:28 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_any(char **tab, int(*f)(char*))
{
	int res;

	res = 0;
	while (*tab != 0)
	{
		res = f(*tab);
		tab++;
		if(res == 1)
			return (1);
	}
	return (0);
}

int starts_with_z(char* str)
{
	return str[0] == 'z';
}

int main(int argc, char** argv)
{
	printf("%d", ft_any(argv + 1, starts_with_z));
	if (argc < 2)
		return 1;
}

