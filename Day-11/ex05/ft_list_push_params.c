/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_params.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 18:54:19 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/24 22:52:15 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
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

t_list	*ft_list_push_params(int ac, char **av)
{
	int		i;
	t_list	*begin_list;

	i = 1;
	begin_list = NULL;
	if (ac > 1)
	{
		while (i <= ac - 1)
		{
			ft_list_push_front(&begin_list, av[i++]);
		}
	}
	return (begin_list);
}
