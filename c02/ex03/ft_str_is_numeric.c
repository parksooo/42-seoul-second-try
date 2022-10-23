/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numberic.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 19:53:25 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 21:11:33 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
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

	printf("arr1[] 's return = %d\n", ft_str_is_numberic(arr1));
	printf("arr2[] 's return = %d\n", ft_str_is_numberic(arr2));
	printf("arr3[] 's return = %d\n", ft_str_is_numberic(arr3));
	printf("arr4[] 's return = %d\n", ft_str_is_numberic(arr4));
}*/
