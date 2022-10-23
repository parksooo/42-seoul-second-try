/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   makeboard.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:43:37 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/09 21:37:18 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int		check_board(int board[4][4], int input[16]);

void	board_init(int board[4][4])
{
	int	i;
	int	j;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			board[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	overlap_in_board(int board[4][4], int y, int x, int index)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < x)
	{
		if (board[y][i] == index)
			return (1);
		i++;
	}
	while (j < y)
	{
		if (board[j][x] == index)
			return (1);
		j++;
	}
	return (0);
}

int	recursive_board(int board[4][4], int y, int x, int input[16])
{
	int	i;

	if (y == 4)
	{
		if (check_board(board, input))
			return (1);
		return (0);
	}
	else if (x == 4)
		return (recursive_board(board, y + 1, 0, input));
	else
	{
		i = 1;
		while (i < 5)
		{	
			board[y][x] = i;
			if (!overlap_in_board(board, y, x, i))
				if (recursive_board(board, y, x + 1, input))
					return (1);
			i++;
		}
	}
	return (0);
}

void	print_board(int board[4][4])
{
	int		i;
	int		j;
	char	tmp;

	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			tmp = board[i][j] + '0';
			write(1, &tmp, 1);
			if (j != 3)
				write(1, " ", 1);
			j++;
		}
		write(1, "\n", 1);
		i++;
	}
}
