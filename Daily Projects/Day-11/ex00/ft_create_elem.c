/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/24 15:31:16 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/25 00:36:01 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "ft_list.h"

t_list	*ft_create_elem(void *data)
{
	t_list *tlist1;

	tlist1 = malloc(sizeof(t_list));
	if (tlist1)
	{
		tlist1->data = data;
		tlist1->next = NULL;
	}
	return (tlist1);
}
