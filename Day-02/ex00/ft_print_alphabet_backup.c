/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 23:22:42 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/11 19:22:28 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		ft_putchar(char c)
{
	write(1, &c, 1);
	return (0);
}

void	ft_print_alphabet(void)
{
	char	ch;
	int		i;

	i = 0;
	ch = 'a';
	while (i < 26)
	{
		ft_putchar(ch);
		i++;
		ch++;
	}
}

int		main(void)
{
	ft_print_alphabet();
}
