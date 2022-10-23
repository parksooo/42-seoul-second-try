/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:38:17 by suhwpark          #+#    #+#             */
/*   Updated: 2022/09/29 08:46:03 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'A' && str[i] <= 'Z'))
			return (0);
		i++;
	}
	return (1);
}
/*#include<stdio.h>
int main()
{
	char arr1[] = "HEYHEYHEY";
	char arr2[] = "QQ123AS";
	char arr3[] = "asdfsaf";
	char arr4[] = "!14324235";

	printf("arr1[]'s return = %d\n" , ft_str_is_uppercase(arr1));
	printf("arr2[]'s return = %d\n" , ft_str_is_uppercase(arr2));
	printf("arr3[]'s return = %d\n" , ft_str_is_uppercase(arr3));
	printf("arr4[]'s return = %d\n" , ft_str_is_uppercase(arr4));
}*/
