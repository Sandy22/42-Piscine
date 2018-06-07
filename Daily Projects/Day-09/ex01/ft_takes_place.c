/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_takes_place.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/18 18:49:04 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/19 14:41:42 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_takes_place(int hour)
{
	int actualhour;

	actualhour = hour / 100;
	printf("THE FOLLOWING TAKES PLACE BETWEEN ");
	if (actualhour == 0)
		printf("%d.00 A.M. AND %d.00 A.M.\n", actualhour + 12, actualhour + 1);
	else if (actualhour == 24)
		printf("%d.00 A.M. AND %d.00 A.M.\n", actualhour - 12, actualhour - 23);
	else if (actualhour == 12)
		printf("%d.00 P.M. AND %d.00 P.M.\n", actualhour, actualhour - 11);
	else if (actualhour == 23)
		printf("%d.00 P.M. AND %d.00 A.M.\n", actualhour - 12, actualhour - 11);
	else if (actualhour >= 0 && actualhour < 11)
		printf("%d.00 A.M. AND %d.00 A.M.\n", actualhour, actualhour + 1);
	else if (actualhour > 11 && actualhour < 23)
		printf("%d.00 P.M. AND %d.00 P.M.\n", actualhour - 12, actualhour - 11);
	else
		printf("%d.00 A.M. AND %d.00 P.M.\n", actualhour, actualhour + 1);
}
