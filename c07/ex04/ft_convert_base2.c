/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 18:31:30 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/09 12:41:35 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_atoi_base(char *str, char *base, int base_len);
int	check_base(char *base);

int	get_num_len(long n, int base_to_len)
{
	long	n_len;

	n_len = 0;
	if (n < 0)
	{
		n_len++;
		n = -n;
	}
	while (n > 0)
	{
		n_len++;
		n /= base_to_len;
	}
	return (n_len);
}

char	*ft_itoa_base(int nbr, char *base_to, int base_to_len)
{
	long	n;
	int		n_len;
	char	*base_to_str;

	n = nbr;
	n_len = get_num_len(n, base_to_len);
	base_to_str = (char *)malloc(sizeof(char) * n_len + 1);
	if (!base_to_str)
		return (0);
	base_to_str[n_len--] = '\0';
	if (n < 0)
	{
		base_to_str[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		base_to_str[n_len] = base_to[n % base_to_len];
		n /= base_to_len;
		n_len--;
	}
	return (base_to_str);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_from_len;
	int		base_to_len;
	int		res;
	char	*new_str;

	base_from_len = check_base(base_from);
	base_to_len = check_base(base_to);
	if (base_from_len == 0 || base_to_len == 0)
		return (0);
	res = ft_atoi_base(nbr, base_from, base_from_len);
	if (res == 0)
	{
		new_str = (char *)malloc(2);
		new_str[0] = base_to[0];
		new_str[1] = '\0';
		return (new_str);
	}
	new_str = ft_itoa_base(res, base_to, base_to_len);
	return (new_str);
}
/*#include <stdio.h>
int main()
{
	char *base_from = "0123456789";
	char *base_to = "0123456789abcdef";
	char *nb = "1234";
	char *res;
	res = ft_convert_base(nb, base_from, base_to);
	printf("%s\n", res);

}*/
