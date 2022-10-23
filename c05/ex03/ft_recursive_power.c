/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 11:50:04 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/05 14:10:35 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*#include<stdio.h>
int main()
{
	printf("%d\n", ft_recursive_power(8, 3));
	printf("%d\n", ft_recursive_power(-15, 3));
	printf("%d\n", ft_recursive_power(10000, 0));
	printf("%d\n", ft_recursive_power(0, 0));
}*/
