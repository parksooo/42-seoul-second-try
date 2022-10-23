/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:39:08 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/08 16:53:45 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	is_charset(char *charset, char c)
{
	while (*charset)
	{
		if (c == *charset)
			return (1);
		charset++;
	}
	return (0);
}

int	word_count(char *str, char *charset)
{
	int	word;

	word = 0;
	while (*str)
	{
		if (!is_charset(charset, *str))
		{
			word++;
			while (*str && (!is_charset(charset, *str)))
				str++;
		}
		str++;
	}
	return (word);
}

void	ft_strdup(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && *(src + i))
	{
		*(dest + i) = *(src + i);
		i++;
	}
	*(dest + i) = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**result;
	char	*start;
	int		i;

	i = 0;
	result = (char **)malloc(sizeof(char *) * (word_count(str, charset) + 1));
	if (!result)
		return (0);
	while (*str)
	{
		if (!is_charset(charset, *str))
		{
			start = str;
			while (*str && !is_charset(charset, *str))
				str++;
			*(result + i) = (char *)malloc(sizeof(char) * (str - start) + 1);
			ft_strdup(*(result + i), start, (str - start));
			i++;
		}
		else
			str++;
	}
	*(result + i) = 0;
	return (result);
}
/*#include<stdio.h>
int main()
{
	char **answer;
	char *str = "hi my name is suhwpark!!";
	char *charset = " ";
	answer = ft_split(str, charset);
	
	for(int i = 0; i < 5; i++)
		printf("%s\n", *(answer + i));
}*/
