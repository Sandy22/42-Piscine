/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   btree_apply_prefix.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/26 22:25:10 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/26 22:37:30 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_btree.h"

void	*btree_apply_prefix(t_btree *root, void (*applyf)(void *))
{
	if (root == NULL)
		return ;
	applyf(root->item);
	btree_apply_prefix(root->left);
	btree_apply_prefix(root->right);
}
