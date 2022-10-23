/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_map.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 19:38:13 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/12 12:10:17 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_map(int *tab, int length, int (*f)(int))
{
	int	*answer;
	int	i;

	answer = (int *)malloc(sizeof(int) * length);
	i = 0;
	while (i < length)
	{
		answer[i] = f(tab[i]);
		i++;
	}
	return (answer);
}
