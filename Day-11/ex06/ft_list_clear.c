/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 19:04:38 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/25 00:44:20 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

void	ft_list_clear(t_list **begin_list)
{
	t_list *temp;
	t_list *del;

	temp = *begin_list;
	while (temp)
	{
		*begin_list = temp->next;
		del = temp;
		temp = temp->next;
		free(del);
	}
}
