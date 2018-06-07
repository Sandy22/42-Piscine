/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 03:05:50 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/16 18:42:45 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int		ft_str_is_alpha(char *str)
{
	int i;

	i = 1;
	if (str[0] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (!((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z')))
			return (0);
		i++;
	}
	return (1);
}

int main()
{
	char	str[] = "";

	printf("%d", ft_str_is_alpha(str));
}
