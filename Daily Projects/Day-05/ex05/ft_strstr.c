/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/15 23:41:49 by smadnaik          #+#    #+#             */
/*   Updated: 2018/02/20 14:02:19 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	char *res;

	res = "";
	if (*to_find == '\0')
		return (str);
	while (*str++ != '\0')
	{
		if (*str == *to_find)
		{
			res = str;
			while (*str == *to_find)
			{
				str++;
				to_find++;
			}
			if (*to_find == '\0')
				return (res);
			else
			{
				str = res;
				res = "";
			}
		}
	}
	return (0);
}
