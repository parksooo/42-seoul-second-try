/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:13:35 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/10 20:01:43 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else
			return (*s1 - *s2);
	}
	return (0);
}
#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "\200";
	char arr2[] = "\0";
	char arr3[] = "hellOworld!";
	char arr4[] = "hellaworld!";
	char arr5[] = "hellyworld!";

	printf("stcmp = %d, ft_strcmp = %d\n", 
	strcmp(arr2, arr1), ft_strcmp(arr2, arr1));
	printf("stcmp = %d, ft_strcmp = %d\n", 
	strcmp(arr2, arr3), ft_strcmp(arr2, arr3));
	printf("stcmp = %d, ft_strcmp = %d\n", 
	strcmp(arr2, arr4), ft_strcmp(arr2, arr4));
	printf("stcmp = %d, ft_strcmp = %d\n", 
	strcmp(arr4, arr5), ft_strcmp(arr4, arr5));
}
