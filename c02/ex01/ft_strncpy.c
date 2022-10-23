/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 22:22:16 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 21:03:03 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	char src[22] = "hi my name is suwpark!";
	char src1[3] = "abc";
	char dest[22];
	char dest2[22];
	char dest3[22];
	strncpy(dest, src, 2);
	ft_strncpy(dest2, src, 2);
	ft_strncpy(dest3, src1, 9);
	printf("src = %s\n", src);
	printf("strncpy_dest = %s\n", dest);
	printf("ft_strncpy_dest2 = %s\n", dest2);
	printf("ft_strncpy_dest3 = %s\n", dest3);
}*/
