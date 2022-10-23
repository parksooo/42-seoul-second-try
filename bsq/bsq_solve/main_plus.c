/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_plus.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:25:29 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/19 21:49:46 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "bsq.h"

void	std_input(char *bf, int bf_size)
{
	int		i;

	i = 0;
	while (read(0, bf, bf_size - i) > 0)
	{
		i = 0;
		while (bf[i] != '\0' && bf[i] != '\n')
			i++;
		*(bf + i++) = '\n';
		bf += i;
	}
}
