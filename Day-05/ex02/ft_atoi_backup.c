/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 14:22:05 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/16 17:56:13 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_atoi(char *str)
{
	int flag;
	int count;
	int num;
	int mult;

	count = 0;
	flag = 0;
	num = 0;
	if (*str == '-')
	{
		flag = 1;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		str++;
		count ++;
	}
	mult = 1;
	while (count > 0)
	{	
		str--;
		num = num + ((*str - 48) * mult);
		mult = mult * 10;
		count--;
	}
	if (flag)
		num = num * -1;
	return (num);
}

int		main(void)
{
	char in[] = "\t\n\v\f\r -256";
	printf("Res: ft_atoi: %d\n", ft_atoi(in));
	printf("res: atoi : %d\n", atoi(in));
}
