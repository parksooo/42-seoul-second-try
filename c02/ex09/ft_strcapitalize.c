/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:49:11 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/03 19:16:38 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	all_lowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int	i;

	all_lowercase(str);
	if (str[0] >= 'a' && str[0] <= 'z')
	str[0] = str[0] - 32;
	i = 1;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			if (!(str[i - 1] >= '0' && str[i - 1] <= '9')
				&& !(str[i - 1] >= 'a' && str[i - 1] <= 'z')
				&& !(str[i - 1] >= 'A' && str[i - 1] <= 'Z'))
				str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*#include<stdio.h>
int main()
{
	char arr[] = "salut, comment tu vas ? 42mots quarante-deux; cinquante+et+un";
	ft_strcapitalize(arr);
	printf("%s\n", arr);
}*/
