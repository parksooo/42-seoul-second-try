/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 06:38:30 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/04 07:30:53 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_strlen(char *s1)
{
	int	i;

	i = 0;
	while (*(s1 + i))
		i++;
	return (i);
}

char	*ft_strcpy(char *s1, char *s2)
{
	while (*s2)
	{
		*s1 = *s2;
		s1++;
		s2++;
	}
	*s1 = '\0';
	return (s1);
}

char	*ft_strdup(char *src)
{
	int		src_len;
	char	*copy;

	src_len = ft_strlen(src);
	copy = (char *)malloc(sizeof(char) * (src_len + 1));
	if (!(copy))
		return (NULL);
	copy = ft_strcpy(copy, src);
	return (copy - src_len);
}
/*#include<stdio.h>
int main()
{
	char *src = "hi my name is suhwpark!";
	char *new_src;
	new_src = ft_strdup(src);
	printf("%s\n", new_src);
}*/
