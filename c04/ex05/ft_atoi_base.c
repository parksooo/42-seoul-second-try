/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/03 09:17:12 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/17 07:01:46 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
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

int	convert_atoi(char *str, char *base, int base_len)
{
	int	sign;
	int	res;
	int	c;

	sign = 1;
	res = 0;
	while ((*str >= 9 && *str <= 13) || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			sign = -sign;
		str++;
	}
	while (*str)
	{
		c = compare_id(*str, base);
		if (c == -1)
			break ;
		res = (res * base_len) + c;
		str++;
	}
	return (sign * res);
}

int	ft_atoi_base(char *str, char *base)
{
	int	base_len;
	int	result;

	base_len = check_base(base);
	if (base_len == 0)
		return (0);
	else
		result = convert_atoi(str, base, base_len);
	return (result);
}
#include<unistd.h>
#include<stdio.h>
int main()
{
        printf("\n\n\t-------ex05-------\n");
    printf("유효하지 않은 문자가 있을경우 출력결과 없음 (test4, 5)\n");
    write(1, "test1.\t10\t:\t", 12);
    int t1 = ft_atoi_base("-1234", "0123456789abcdef");
    printf("%d\n", t1);
    write(1, "test2.\t-174\t:\t", 15);
    int t2 = ft_atoi_base("  -ae", "0123456789abcdef");
    printf("%d\n", t2);
    write(1, "test3.\t169\t:\t", 13);
    int t3 = ft_atoi_base("a9", "0123456789abcdef");
    printf("%d\n", t3);
    write(1, "test4.\t(blank)\t:\t", 18);
    int t4 = ft_atoi_base("a9", "  -+--00123456789abcdef");
    printf("%d\n", t4);
    write(1, "test5.\t(blank)\t:\t", 18);
    int t5 = ft_atoi_base("  -+ a9", "0123456789abcdef");
    printf("%d\n", t5);
}
