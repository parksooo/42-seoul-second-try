/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:46:54 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 21:27:59 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr_non_printable(char *str)
{
	unsigned int	i;
	unsigned char	*str2;

	str2 = (unsigned char *)str;
	i = 0;
	while (str2[i])
	{
		if (str2[i] >= 32 && str2[i] <= 126)
			ft_putchar(str2[i]);
		else
		{
			ft_putchar('\\');
			ft_putchar("0123456789abcdef"[str2[i] / 16]);
			ft_putchar("0123456789abcdef"[str2[i] % 16]);
		}
		i++;
	}
}
/*int main()
{
	char arr[] = "Coucou\ntu vas bien ?";
	ft_putstr_non_printable(arr);
}*/
