/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 08:02:43 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/04 09:20:13 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	range_len;
	int	*tab;
	int	i;

	i = 0;
	range_len = (max - min);
	tab = (int *)malloc(sizeof(int) * range_len);
	if (!(tab))
		return (0);
	if (min >= max)
		return (0);
	while (i < range_len)
	{
		*(tab + i) = min;
		i++;
		min++;
	}
	return (tab);
}
/*#include<stdio.h>
int main()
{
	int *tab;
	int i = 0;
	tab = ft_range(-3, 5);
	while(i < 8)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
