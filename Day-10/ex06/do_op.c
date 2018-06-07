/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do-op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/23 16:47:25 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/23 23:42:17 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

int		do_op_arithemtic(int a, int b, char **argv)
{
	if (argv[2][0] == '+')
		ft_putnbr(a + b);
	else if (argv[2][0] == '-')
		ft_putnbr(a - b);
	else if (argv[2][0] == '*i')
		ft_putnbr(a * b);
	else if (argv[2][0] == '/')
	{
		if (b == 0)
			ft_putstr("Stop : division by zero\n");
		else
			ft_putnbr(a / b);
	}
	else if (argv[2][0] == '%')
	{
		if (b == 0)
			ft_putstr("Stop : modulo by zero\n");
		else
			ft_putnbr(a % b);
	}
	return (0);
}

int		do_op(int argc, char **argv)
{
	int i;
	int a;
	int b;

	i = 1;
	if (argc != 4)
	{
		return (0);
	}
	a = ft_atoi(argv[1]);
	b = ft_atoi(argv[3]);
	do_op_arithemtic(a, b, argv);
	return (0);
}
