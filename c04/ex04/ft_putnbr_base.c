/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/02 18:06:28 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/05 06:15:21 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	check_base(char *str)
{
	int	i;
	int	j;
	int	str_len;

	str_len = ft_strlen(str);
	if (str_len <= 1)
		return (0);
	i = 0;
	while (*(str + i) != '\0')
	{
		if (*(str + i) == '-' || *(str + i) == '+')
			return (0);
		j = i + 1;
		while (j < str_len)
		{
			if (*(str + i) == *(str + j))
				return (0);
			j++;
		}
		i++;
	}
	return (1);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int			base_len;
	long long	n;

	n = nbr;
	base_len = ft_strlen(base);
	if (check_base(base) == 1)
	{
		if (n < 0)
		{
			ft_putchar('-');
			n = -n;
		}
		if (n < base_len)
			ft_putchar(*(base + n));
		if (n >= base_len)
		{
			ft_putnbr_base((n / base_len), base);
			ft_putnbr_base((n % base_len), base);
		}
	}
}
/*#include<stdio.h>
int main()
{
	write(1, "4d2", 3);
	ft_putnbr_base(1234, "0123456789abcdef");
}*/
