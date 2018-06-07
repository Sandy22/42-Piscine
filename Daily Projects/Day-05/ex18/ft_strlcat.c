/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 04:39:10 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/20 13:56:39 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

unisgned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[j]='\0';
	printf("%d && %d", i, j);
	return dest;
}

int main()
{
char test[256] = "\0zxcvzxcvzxcvxzcvzxcv";
printf("%d-", ft_strlcpy(test, "asdf", 16));
printf("%s\n", test);
printf("%d-", ft_strlcpy(test, "uiop", 0));
printf("%s\n", test);
printf("%d-", ft_strlcpy(test, "qwerty", 4));
printf("%s\n", test);
printf("%d-", ft_strlcpy(test, "", 4));
printf("%s\n", test);
}
