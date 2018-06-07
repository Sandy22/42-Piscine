/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_whitespaces.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 16:12:10 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/18 23:19:55 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_count_words(char *str)
{
	int		count;
	boolean words;
	boolean spaces;

	count = 0;
	words = false;
	spaces = true;
	while (*str != '\0')
	{
		if ((*str == '\t' || *str == ' ' || *str == '\n') && !words)
		{
			words = true;
			spaces = false;
		}
		if ((*str != '\t' || *str != ' ' || *str != '\n') && !spaces)
		{
			words = false;
			spaces = true;
			count++;
		}
		str++;
	}
	return (count);
}

char	**ft_split_whitespaces(char *str)
{
	char	**result;
	int		i;
	int		j;

	result = (char**)malloc(sizeof(char) * (ft_count_words(str) + 1));
	i = 0;
	j = 0;
	while (*str != '\0')
	{
		result[i] = (char*)malloc(sizeof(char) * (10));
		j = 0;
		while (*str != '\t' || *str != ' ' || *str != '\n')
		{
			*result[i] = *str;
			str++;
			j++;
		}
		while (*str == '\t' || *str == ' ' || *str == '\n')
			str++;
		i++;
	}
	return (result);
}
