/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/30 20:13:35 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 22:14:42 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && (*(s1 + i) != '\0' || *(s2 + i) != '\0'))
	{
		if (*(s1 + i) == *(s2 + i))
			i++;
		else
			return (*(s1 + i) - *(s2 + i));
	}
	return (0);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	char arr1[] = "";
	char arr2[] = "helloworld!";
	char arr3[] = "hellOworld!";
	char arr4[] = "hellaworld!";
	char arr5[] = "hellyworld!";

	printf("strnmp = %d, ft_strncmp = %d\n", 
	strncmp(arr2, arr1, 2), ft_strncmp(arr2, arr1, 2));
	printf("strncmp = %d, ft_strncmp = %d\n", 
	strncmp(arr2, arr3, 4), ft_strncmp(arr2, arr3, 4));
	printf("strncmp = %d, ft_strncmp = %d\n", 
	strncmp(arr2, arr4, 5), ft_strncmp(arr2, arr4, 5));
	printf("strncmp = %d, ft_strncmp = %d\n", 
	strncmp(arr4, arr5, 10), ft_strncmp(arr4, arr5, 10));
}*/
