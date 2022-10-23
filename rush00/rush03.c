/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush02.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 11:02:28 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 14:58:30 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c);

char	*makearr(int y, int Y)
{
	char	*arr;

	if (y == 0 || y == Y - 1)
		arr = "ABC";
	else
		arr = "B B";
	return (arr);
}

void	rush(int X, int Y)
{
	int		y;
	int		x;
	char	*str;

	y = 0;
	if (X <= 0 || Y <= 0)
		return ;
	while (y < Y)
	{
		x = 0;
		str = makearr(y, Y);
		while (x < X)
		{
			if (x == 0)
				ft_putchar(str[0]);
			else if (x == X - 1)
				ft_putchar(str[2]);
			else
				ft_putchar(str[1]);
			x++;
		}
		ft_putchar('\n');
		y++;
	}
}
