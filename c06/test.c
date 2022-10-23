/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kyjo <kyjo@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 20:58:08 by kyjo              #+#    #+#             */
/*   Updated: 2022/10/11 15:00:49 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
int	ft_strcmp(char *s1, char *s2)
{
	int		i;
	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return ((unsigned char)s1[i] - (unsigned char)s2[i]);
		i++;
	}
	return (0);
}
void	ft_putchar(char *str)
{
	int	i;
	i = 0;
	while (str[i])
		i++;
	write (1, str, i);
	write (1, "\n", 1);
}
void	swap(char **s1, char **s2)
{
	char	*temp;
	temp = *s1;
	*s1 = *s2;
	*s2 = temp;
}
int	main(int argc, char **argv)
{
	int		i;
	int		j;
	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_strcmp(argv[i], argv[j]) > 0)
				swap(&argv[i], &argv[j]);
			j++;
		}
		ft_putchar(argv[i]);
		i++;
	}
}
