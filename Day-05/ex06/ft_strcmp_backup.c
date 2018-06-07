/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 00:37:41 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/16 01:23:51 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int		ft_strcmp(char *s1, char *s2)
{
//	if (s1 == NULL || s){}
	while (*s1 != '\0' || *s2 != '\0')
	{
		if(*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return *s1 - *s2;
	}
	return 0;
}

int main(void)
{
	char s1[] = {"Hi"};
	char s2[] = {"He"};
	char s3[] = {};
	char s4[] = {};

	printf("%d\n", strcmp("asdf", "asdf"));
	printf("%d\n", strcmp("asde", "asdf"));
	printf("%d\n", strcmp("asdg", "asdf"));
	printf("%d\n", strcmp(s3, s4));
	printf("%d\n", strcmp("A", s3));
	printf("%d\n\n", strcmp(s3, "A"));


	printf("%d\n", ft_strcmp("asdf", "asdf"));
	printf("%d\n", ft_strcmp("asde", "asdf"));
	printf("%d\n", ft_strcmp("asdg", "asdf"));
	printf("%d\n", ft_strcmp(s3, s4));
	printf("%d\n", ft_strcmp("A", s3));
	printf("%d\n\n", ft_strcmp(s3, "A"));

	printf("%d\n", ft_strcmp(s1, s2));
	printf("%d", strcmp(s1, s2));
	//ft_strcmp()
}
