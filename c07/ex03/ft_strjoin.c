/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 15:36:35 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/08 16:51:00 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

int	strs_len(char **str, int size)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (*(str + j))
		{
			len++;
			j++;
		}
		i++;
	}
	return (len);
}

char	*ft_strcat(char *s1, char *s2)
{
	while (*s1)
		s1++;
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (s1);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		all_len;
	char	*res;
	int		i;

	all_len = strs_len(strs, size);
	if (size == 0)
	{
		res = malloc(sizeof(char) * 1);
		*res = '\0';
		return (res);
	}
	res = (char *)malloc(all_len + (ft_strlen(sep) * (size - 1) + 1));
	if (!res)
		return (0);
	*res = '\0';
	i = 0;
	while (i < size)
	{
		ft_strcat(res, *(strs + i));
		if (i < size - 1)
			ft_strcat(res, sep);
		i++;
	}
	return (res);
}
/*#include<stdio.h>
int	main()
{
	printf("-------ex03-------\n\n");
    char *ex03_arr1;
    char *ex03_arr2;
    char *ex03_arr3;
	char *ex03_str[5];

	ex03_str[0] = "hello";
	ex03_str[1] = "my";
	ex03_str[2] = "name";
	ex03_str[3] = "is";
	ex03_str[4] = "hunpark!";
	ex03_arr1 = ft_strjoin(5, ex03_str, "   ");
    ex03_arr2 = ft_strjoin(5, ex03_str, "::::");
    ex03_arr3 = ft_strjoin(5, ex03_str, ";;");
	printf("%s\n", ex03_arr1);
    printf("%s\n", ex03_arr2);
    printf("%s\n\n", ex03_arr3);
    free(ex03_arr1);
    free(ex03_arr2);
    free(ex03_arr3);
}*/
