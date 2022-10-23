/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 07:14:59 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/12 07:40:31 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "doop.h"

int	positioning(int a, char op, int b)
{
	int	(*calcul[5])(int, int);

	calcul[0] = &add;
	calcul[1] = &min;
	calcul[2] = &mul;
	calcul[3] = &div;
	calcul[4] = &mod;
	if (op == '+')
		return (calcul[0](a, b));
	if (op == '-')
		return (calcul[1](a, b));
	if (op == '*')
		return (calcul[2](a, b));
	if (op == '/')
		return (calcul[3](a, b));
	if (op == '%')
		return (calcul[4](a, b));
	return (0);
}

int	main(int ac, char **av)
{
	int		a;
	int		b;
	char	op;

	if (ac == 4)
	{
		if (!ft_is_vaild(av[2]))
			write(1, "0\n", 2);
		else
		{
			op = av[2][0];
			a = atoi(av[1]);
			b = atoi(av[3]);
			if (op == '/' && b == 0)
				write(1, "Stop : division by zero\n", 24);
			else if (op == '%' && b == 0)
				write(1, "Stop : modulo by zero\n", 22);
			else
			{
				ft_putnbr(positioning(a, op, b));
				write(1, "\n", 1);
			}
		}
	}
	return (0);
}
