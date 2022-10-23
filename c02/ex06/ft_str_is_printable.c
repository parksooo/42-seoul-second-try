/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 13:57:41 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 19:51:08 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 32 && str[i] <= 126))
			return (0);
		i++;
	}
	return (1);
}
/*#include<stdio.h>
int main()
{

	char arr[3];
	arr[0] = 1;
	arr[1] = 29;
	arr[2] = 31;
	char arr2[] = "hi 123 MY *&&%$^*(";

	printf("not print arr = %d\n", ft_str_is_printable(arr));
	printf("can print arr = %d\n", ft_str_is_printable(arr2));

}*/
