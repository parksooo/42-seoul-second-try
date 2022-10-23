/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 07:49:15 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 21:09:22 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z')
			&& !(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*#include<stdio.h>
int main()
{
	char arr1[] = "asdf123";
	char arr2[] = "456789123";
	char arr3[] = "asdfDSFSDFDVSD";
	char arr4[] = "\tsfvwwr";

	printf("arr1[] 's return = %d\n", ft_str_is_alpha(arr1));
	printf("arr2[] 's return = %d\n", ft_str_is_alpha(arr2));
	printf("arr3[] 's return = %d\n", ft_str_is_alpha(arr3));
	printf("arr4[] 's return = %d\n", ft_str_is_alpha(arr4));
}*/
