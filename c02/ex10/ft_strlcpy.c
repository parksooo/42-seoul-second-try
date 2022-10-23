/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 16:07:28 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 19:41:31 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_len;

	i = 0;
	src_len = ft_strlen(src);
	if (size == 0)
		return (src_len);
	while (src[i] && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (src_len);
}
/*#include<stdio.h>
int main()
{
	char dest1[30];
	char dest2[30];
	char src1[] = "hello my name id park!";
	char src2[] = "";
	printf("return value = %d\n", ft_strlcpy(dest1, src1, 10));
	printf("%s\n", dest1);
	printf("return value = %d\n", ft_strlcpy(dest2, src2, 6));
	printf("%s\n", dest2);
}*/
