/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 01:25:37 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/20 14:05:27 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>
int		ft_strncmp(char *s1, char *s2, unsigned int n)
{

	while (n > 0)
	{
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
		n--;
	}
	return 0;

}

int main()
{
	//char s1[] = {"Hi"};
	//char s2[] = {"He"};
	char s3[] = {};
	char s4[] = {};

	printf("%d\n", strncmp("asdf", "asdf",4));
	printf("%d\n", strncmp("asde", "asdf",4));
	printf("%d\n", strncmp("asdg", "asdf",4));
	printf("%d\n", strncmp(s3, s4, 3));
	printf("%d\n", strncmp("A", s3, 3));
	printf("%d\n\n", strncmp(s3, "A", 0));


	printf("%d\n", ft_strncmp("asdf", "asdf", 4));
	printf("%d\n", ft_strncmp("asde", "asdf", 4));
	printf("%d\n", ft_strncmp("asdg", "asdf", 4));
	printf("%d\n", ft_strncmp(s3, s4, 3));
	printf("%d\n", ft_strncmp("A", s3, 3));
	printf("%d\n\n", ft_strncmp(s3, "A", 0));

	//printf("%d\n", ft_strcmp(s1, s2));
	//printf("%d", strcmp(s1, s2));

}
