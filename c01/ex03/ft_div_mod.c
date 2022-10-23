/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 11:17:37 by suhwpark          #+#    #+#             */
/*   Updated: 2022/09/29 13:44:56 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	int	i;
	int	j;

	i = a / b;
	j = a % b;
	*div = i;
	*mod = j;
}
/*#include <stdio.h>
int main()
{
	int div, mod;
	int a = 100, b = 20;
	ft_div_mod(a, b, &div, &mod);
	printf("div = %d mod = %d\n", div, mod);
}*/
