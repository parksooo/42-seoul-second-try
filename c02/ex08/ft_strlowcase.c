/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:26:44 by suhwpark          #+#    #+#             */
/*   Updated: 2022/09/29 14:46:25 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
	return (str);
}
/*#include<stdio.h>
int main()
{
	char arr[] = "ASDHVBBWJZZZZksjfbej1S3F3G";
	ft_strlowcase(arr);
	printf("%s\n", arr);
}*/
