/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_combn.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 22:12:43 by suhwpark          #+#    #+#             */
/*   Updated: 2022/09/28 09:48:51 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_put_arr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n - 1)
	{
		if (n > 1 && arr[i] >= arr[i + 1])
			return ;
		i++;
	}
	i = 0;
	while (i < n)
	{
		ft_putchar(arr[i] + '0');
		i++;
	}
	if (arr[0] < 10 - n)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	search_arr(int *arr, int n)
{
	int	i;

	i = 0;
	while (i < n)
	{
		arr[i] = 0;
		i++;
	}
	while (arr[0] <= 10 - n)
	{
		ft_put_arr(arr, n);
		arr[n - 1]++;
		i = n;
		while (i > 1 && n > 1)
		{
			i--;
			if (i > 0 && arr[i] > 10 - (n - i))
			{
				arr[i - 1]++;
				arr[i] = 0;
			}
			else
				break ;
		}
	}
}

void	ft_print_combn(int n)
{
	int	arr[9];

	if (n > 0 && n < 10)
		search_arr(arr, n);
}
/*int main()
{
	ft_print_combn(4);
}*/
