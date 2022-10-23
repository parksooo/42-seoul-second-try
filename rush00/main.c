/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/01 14:50:11 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/01 14:52:03 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	rush(int X, int Y);

int	ft_atoi(char *str)
{
	int	i;
	int	result;

	i = 0;
	result = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{	
		result = (result * 10) + (str[i] - '0');
		i++;
	}
	return (result);
}

int	main(int argc, char **argv)
{
	if (argc == 3)
		rush(ft_atoi(argv[1]), ft_atoi(argv[2]));
	return (0);
}
