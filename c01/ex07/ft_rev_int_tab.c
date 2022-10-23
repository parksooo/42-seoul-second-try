/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:34:51 by suhwpark          #+#    #+#             */
/*   Updated: 2022/09/30 21:22:52 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < size / 2)
	{
		tmp = tab[size - i - 1];
		tab[size - i - 1] = tab[i];
		tab[i] = tmp;
		i++;
	}
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	int i = 0;
	int tab[4] = {4, 88, 100, 99};
	ft_rev_int_tab(tab, 4);
	while(i < 4)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
