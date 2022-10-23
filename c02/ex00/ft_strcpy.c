/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 19:22:26 by suhwpark          #+#    #+#             */
/*   Updated: 2022/09/28 22:18:49 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	char dest1[24];
	char dest2[24];
	char src[24] = "hi my name is suhwpark!";
	strcpy(dest2, src);
	ft_strcpy(dest1, src);
	printf("src = %s\n", src);
	printf("strcpy_dest = %s\n", dest2);
	printf("ft_strcpy_dest = %s\n", dest1);
}*/
