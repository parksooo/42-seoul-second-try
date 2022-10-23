/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/28 12:56:36 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/05 06:13:37 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (*str)
	{
		len++;
		str++;
	}
	return (len);
}
/*#include<stdio.h>
#include<string.h>
int main()
{
	char arr[] = "1234567891011";
	printf("strlen = %ld ft_strlen = %d\n", strlen(arr), ft_strlen(arr));
}*/
