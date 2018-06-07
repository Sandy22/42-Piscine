/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/17 11:35:57 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/18 22:25:20 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	char	*temp;
	int		i;

	i = 0;
	temp = src;
	while (*src != '\0')
	{
		src++;
		i++;
	}
	src = temp;
	result = (char*)malloc(sizeof(*src) * (i + 1));
	if (result == NULL)
		return (NULL);
	temp = result;
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (result);
}
