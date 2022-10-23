/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 14:10:36 by suhwpark          #+#    #+#             */
/*   Updated: 2022/09/29 14:24:57 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] = str[i] - 32;
		i++;
	}
	return (str);
}
/*#include <stdio.h>
int	main()
{
	int i = 0;
	char arr[] = "asdfGWEsdfwD123aaaDFGefBzZ";
	ft_strupcase(arr);
	while(arr[i])
	{
		printf("%c", arr[i]);
		i++;
	}
}*/
