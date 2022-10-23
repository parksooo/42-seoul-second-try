/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 10:49:55 by suhwpark          #+#    #+#             */
/*   Updated: 2022/09/28 10:56:27 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
/*#include <stdio.h>
int main()
{
	int a = 5;
	int b = 1000;
	printf("before a = %d , b = %d\n", a, b); 
	ft_swap(&a, &b);
	printf("after a = %d, b = %d\n", a, b);
}*/
