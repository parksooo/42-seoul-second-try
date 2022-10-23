/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 10:40:52 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/08 16:51:58 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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

int	compare_id(char c, char *base)
{
	int	i;

	i = 0;
	while (*(base + i))
	{
		if (*(base + i) == c)
			return (i);
		i++;
	}
	return (-1);
}

int	check_base(char *base)
{
	int	i;
	int	j;
	int	base_len;

	base_len = ft_strlen(base);
	if (base_len <= 1 || *base == '\0')
		return (0);
	i = 0;
	while (*(base + i))
	{
		if (*(base + i) == '-' || *(base + i) == '+'
			|| *(base + i) == ' ' || (*(base + i) >= 9 && *(base + i) <= 13))
			return (0);
		j = i + 1;
		while (j < base_len)
		{
			if (*(base + i) == *(base + j))
				return (0);
			j++;
		}
		i++;
	}
	return (i);
}

int	ft_atoi_base(char *str, char *base, int base_len)
{
	int	sign;
	int	res;
	int	index;

	sign = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str)
	{
		index = compare_id(*str, base);
		if (index == -1)
			break ;
		res = res * base_len + index;
		str++;
	}
	return (res * sign);
}
