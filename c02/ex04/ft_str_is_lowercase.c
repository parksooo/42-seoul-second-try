/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 08:25:37 by suhwpark          #+#    #+#             */
/*   Updated: 2022/09/29 08:36:12 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (!(str[i] >= 'a' && str[i] <= 'z'))
			return (0);
		i++;
	}
	return (1);
}
/*#include<stdio.h>
int main()
{
	char arr1[] = "1234aa";
	char arr2[] = "himynameispark";
	char arr3[] = "himynameispark!";
	char arr4[] = "ASD";

	printf("arr1[]'s return = %d\n", ft_str_is_lowercase(arr1));
	printf("arr2[]'s return = %d\n", ft_str_is_lowercase(arr2));
	printf("arr3[]'s return = %d\n", ft_str_is_lowercase(arr3));
	printf("arr4[]'s return = %d\n", ft_str_is_lowercase(arr4));
}*/
