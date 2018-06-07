/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_eight_queens_puzzle.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: smadnaik <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/01/13 15:59:28 by smadnaik          #+#    #+#             */
/*   Updated: 2018/01/13 21:27:03 by smadnaik         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_eight_queens_puzzle(void)
{
	int arr[8][8];
	int pos[8];
	boolean flag = false;

	int i = 0;
	while(i < 8)
	{
		arr[i][0] = 1;
	}
	i = 0;
	int j = 0;
	while(flag== false)
	{
		if(a[i][j] == a[i+1][j+1] || a[i-1][j-1] == a[i][j])
		{
			continue;
		}
		else{
			if(a[i][j] ==1)
			{
				a[i][j] = 0;
				a[i+1][j] = 1
			}
			flag = true;
		}
	}
}
