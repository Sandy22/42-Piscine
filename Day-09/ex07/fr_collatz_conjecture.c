/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fr_collatz_conjecture.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/19 17:12:34 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/19 17:25:47 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_collatz_conjecture(unsigned int base)
{
	if (base == 1)
		return (1);
	if (base % 2 == 0)
		base = base / 2;
	else
		base = ((3 * base) + 1);
	return (ft_collatz_conjecture(base) + 1);
}
