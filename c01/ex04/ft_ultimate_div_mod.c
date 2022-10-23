/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:29:09 by suhwpark          #+#    #+#             */
/*   Updated: 2022/09/29 13:45:36 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	i;
	int	j;

	i = *a / *b;
	j = *a % *b;
	*a = i;
	*b = j;
}
/*#include<stdio.h>
int main()
{
	int a = 10;
	int b = 5;
	printf("before a = %d, b = %d\n", a, b);
	ft_ultimate_div_mod(&a, &b);
	printf("after a = %d, b = %d\n", a, b);
}*/
