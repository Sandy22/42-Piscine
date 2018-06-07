/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 18:28:37 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/25 00:40:36 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *temp;

	if (!(*begin_list))
		*begin_list = ft_create_elem(data);
	else
	{
		temp = ft_create_elem(data);
		temp->next = *begin_list;
		*begin_list = temp;
	}
}
