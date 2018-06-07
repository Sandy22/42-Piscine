/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 18:48:04 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/25 00:42:03 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"

t_list	*ft_list_last(t_list *begin_list)
{
	if (!(begin_list))
		return (0);
	else
	{
		while (begin_list->next)
			begin_list = begin_list->next;
		return (begin_list);
	}
}
