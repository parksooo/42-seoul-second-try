/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:20:21 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 22:18:43 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	while (*dest)
		dest++;
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (dest);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	char dest[50] = "hi my name";
	char dest2[50] = "hi my name";
	char src[] = "is suhwpark!";
	ft_strcat(dest, src);
	strcat(dest2, src);
	printf("ft_strcat : %s\n", dest);
	printf("strcat : %s\n", dest2);
}*/
