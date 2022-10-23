/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 13:51:01 by suhwpark          #+#    #+#             */
/*   Updated: 2022/09/30 19:11:37 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	mini;

	i = 0;
	while (i < size - 1)
	{
		j = i + 1;
		mini = i;
		while (j < size)
		{
			if (tab[mini] > tab[j])
				ft_swap(&tab[mini], &tab[j]);
			j++;
		}
		i++;
	}
}
/*#include<stdio.h>
int main()
{
	int i = 0;
	int tab[10] = {4, 6, 2, 7, 50, 1, 8, 24, 11, 67};
	ft_sort_int_tab(tab, 10);
	while(i < 10)
	{
		printf("%d ", tab[i]);
		i++;
	}
}*/
