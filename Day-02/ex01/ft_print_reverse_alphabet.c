/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/10 23:26:51 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/11 19:29:31 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_print_reverse_alphabet(void)
{
	char	ch;
	int		i;

	i = 0;
	ch = 'z';
	while (i < 26)
	{
		ft_putchar(ch);
		i++;
		ch--;
	}
}
