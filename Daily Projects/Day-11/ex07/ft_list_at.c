/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 19:29:33 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/25 00:45:53 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_at(t_list *begin_list, unsigned int nbr)
{
	while (nbr > 0)
	{
		if (!(begin_list))
			return (begin_list);
		else
		{
			begin_list = begin_list->next;
			nbr--;
		}
	}
	return (begin_list);
}
