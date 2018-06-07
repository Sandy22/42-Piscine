/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_generic.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 17:45:42 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/19 14:41:26 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_generic(void)
{
	char	*response;
	int		i;

	response = "Tut tut ; Tut tut\n";
	i = 0;
	while (response[i] != '\0')
	{
		write(1, &response[i], 1);
		i++;
	}
}
