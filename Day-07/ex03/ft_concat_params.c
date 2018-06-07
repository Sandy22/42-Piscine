/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_concat_params.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 00:27:11 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/18 21:03:30 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_concat_params(int argc, char **argv)
{
	char	*result;
	char	*temp;
	int		i;
	int		j;
	int		k;

	i = 1;
	j = 0;
	k = 0;
	result = (char*)malloc(sizeof(char) * (argc));
	temp = result;
	while (i < argc)
	{
		while (argv[i][k] != '\0')
			result[j++] = argv[i][k++];
		k = 0;
		if (i < argc - 1)
			result[j++] = '\n';
		else
			result[j] = '\0';
		i++;
	}
	return (temp);
}
