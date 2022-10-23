/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 12:39:53 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 22:20:00 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	j;

	j = 0;
	while (*dest)
		dest++;
	while (*(src + j) && j < nb)
	{
		*(dest + j) = *(src + j);
		j++;
	}
	*(dest + j) = '\0';
	return (dest);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	char dest[50] = "hi my name";
	char src[] = "is suhwpark!";
	char dest1[50] = "hi my name";

	ft_strncat(dest, src, 7);
	strncat(dest1, src, 7);
	printf("strncat : %s\n ft_strncat : %s\n", dest1, dest);  

}*/
