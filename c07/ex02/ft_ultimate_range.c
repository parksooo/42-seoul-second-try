/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 09:14:01 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/09 12:52:59 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;
	int	range_len;
	int	*tmp;

	range_len = (max - min);
	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	tmp = (int *)malloc(sizeof(int) * range_len);
	if ((!tmp))
		return (-1);
	i = 0;
	while (i < range_len)
	{
		*(tmp + i) = min + i;
		i++;
	}
	*range = tmp;
	return (i);
}
/*#include<stdio.h>
int main()
{
	int return_value;
	int *range;
	int i = 0;
	return_value = ft_ultimate_range(&range, -1, 7);
	printf("%d\n", return_value);
	while(i < 8)
	{
		printf("%d ", range[i]);
		i++;
	}
}*/
