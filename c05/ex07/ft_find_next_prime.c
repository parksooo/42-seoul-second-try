/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 18:01:06 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/05 14:10:00 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb <= 1)
		return (0);
	i = 2;
	while (i <= nb / i)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;
	int	res;

	i = 0;
	if (ft_is_prime(nb) == 1)
		return (nb);
	while (1)
	{
		if (ft_is_prime(nb) == 1)
		{
			res = nb;
			break ;
		}
		nb++;
	}
	return (res);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n", ft_find_next_prime(15));
	printf("%d\n", ft_find_next_prime(3));
	printf("%d\n", ft_find_next_prime(21));
}*/
