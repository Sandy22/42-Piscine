/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 16:00:50 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/25 00:37:29 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *temp;

	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		temp = *begin_list;
		while (temp->next)
		{
			temp = temp->next;
		}
		temp->next = ft_create_elem(data);
	}
}
