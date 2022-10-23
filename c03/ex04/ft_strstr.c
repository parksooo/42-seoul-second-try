/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 15:34:32 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 16:33:07 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strstr(char *str, char *to_find)
{
	int		i;

	if (*to_find == '\0')
		return (str);
	while (*str != '\0')
	{
		i = 0;
		while (*(str + i) == *(to_find + i))
		{
			i++;
			if (*(to_find + i) == '\0')
				return (str);
		}
		str++;
	}
	return (0);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	char *str = "hi my name is suhwpark!";
	char *find = "is";
	
	printf("%s\n", ft_strstr(str, find));
}*/
