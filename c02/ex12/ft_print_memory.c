/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_memory.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 16:15:33 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/11 08:57:19 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	print_fristzone(unsigned long long addr)
{
	int		i;
	char	arr[16];

	i = 0;
	while (i < 16)
	{
		arr[15 - i] = "0123456789abcdef"[addr % 16];
		addr = addr / 16;
		i++;
	}
	write(1, arr, 16);
	write(1, ":", 1);
}

void	print_secondzone(unsigned char *addr, int row)
{
	int	i;

	i = 0;
	while (i < 16)
	{
		if (i % 2 == 0)
			write(1, " ", 1);
		if (i < row)
		{
			write(1, &"0123456789abcdef"[addr[i] / 16], 1);
			write(1, &"0123456789abcdef"[addr[i] % 16], 1);
		}
		else
			write(1, "  ", 2);
		i++;
	}
	write(1, " ", 1);
}

void	print_lastzone(char *addr, int row)
{
	int	i;

	i = 0;
	while (i < row)
	{
		if (addr[i] < 32 || addr[i] > 126)
			write(1, ".", 1);
		else
			write(1, &addr[i], 1);
		i++;
	}
	write(1, "\n", 1);
}

void	*ft_print_memory(void *addr, unsigned int size)
{
	unsigned int	i;
	int				row;

	i = 0;
	while (i * 16 <= size)
	{
		if ((i + 1) * 16 <= size)
			row = 16;
		else
			row = size % 16;
		print_fristzone((unsigned long long)addr + (i * 16));
		print_secondzone((unsigned char *)addr + (i * 16), row);
		print_lastzone(addr + (i * 16), row);
		i++;
	}
	return (addr);
}
#include<stdio.h>
int	main(void)
{
/*	char	addr[] = "Bonjour les aminches\t\n\tc  est fou\ttout\tce qu on peut faire avec\t\n\tprint_memory\n\n\n\tlol.lol\n ";
	char	addr1[] = "abcd\0";
	printf("sizeof(addr): %lu\n", sizeof(addr1)); //return 6
	printf("size parameter value: sizeof(addr)\n\n");
	ft_print_memory(addr, sizeof(addr));
	return (0);*/
	char	*str = "Bonjour les amin\n\nprint_memory\n\n\n\nlol\nlol\n \0";
	ft_print_memory(str, 44);
	return (0);
}
