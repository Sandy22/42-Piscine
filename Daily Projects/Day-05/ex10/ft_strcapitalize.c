/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/16 02:52:51 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/16 23:28:46 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int i;

	i = 1;
	if (str[0] >= 97 && str[0] <= 122)
		str[0] = str[0] - 32;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (str[i - 1] >= ' ' && str[i - 1] <= '/')
				str[i] = str[i] - 32;
		}
		else if (str[i] >= 'A' && str[i] <= 'Z' && str[i - 1] != ' ')
		{
			if (!(str[i - 1] >= ' ' && str[i - 1] <= '/'))
				str[i] = str[i] + 32;
		}
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}
