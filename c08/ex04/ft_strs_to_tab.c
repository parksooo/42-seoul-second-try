/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:55:37 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/10 19:07:52 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		str++;
		len++;
	}
	return (len);
}

char	*ft_strdup(char *str)
{
	int		str_len;
	char	*copy_str;

	str_len = ft_strlen(str);
	copy_str = (char *)malloc(sizeof(char) * str_len + 1);
	if (!copy_str)
		return (0);
	while (*str)
	{
		*copy_str = *str;
		copy_str++;
		str++;
	}
	*copy_str = '\0';
	return (copy_str - str_len);
}

struct	s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	int			i;
	t_stock_str	*stock;

	stock = (t_stock_str *)malloc(sizeof(t_stock_str) * (ac + 1));
	if (!stock)
		return (0);
	i = 0;
	while (i < ac)
	{
		stock[i].size = ft_strlen(av[i]);
		stock[i].str = av[i];
		stock[i].copy = ft_strdup(av[i]);
		i++;
	}
	stock[i].str = 0;
	stock[i].copy = 0;
	stock[i].size = 0;
	return (stock);
}
