/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ten_queens_puzzle.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 07:38:11 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/06 21:49:54 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int	ft_abs(int num)
{
	if (num > 0)
		return (num);
	else
		return (-num);
}

int	is_able(int *board, int x)
{
	int	i;

	i = 0;
	while (i < x)
	{
		if (board[x] == board[i]
			|| ft_abs(x - i) == ft_abs(board[x] - board[i]))
			return (0);
		i++;
	}
	return (1);
}

void	print_board(int *board)
{
	int	i;
	int	tmp;

	i = 0;
	while (i < 10)
	{
		tmp = board[i] + '0';
		write(1, &tmp, 1);
		i++;
	}
	write(1, "\n", 1);
}

void	find_queen(int *board, int x, int *cnt)
{
	int	i;

	i = 0;
	if (x == 10)
	{
		*cnt = *cnt + 1;
		print_board(board);
		return ;
	}
	while (i < 10)
	{
		board[x] = i;
		if (is_able(board, x))
			find_queen(board, x + 1, cnt);
		i++;
	}
}

int	ft_ten_queens_puzzle(void)
{
	int	cnt;
	int	i;
	int	board[10];

	cnt = 0;
	i = 0;
	while (i < 10)
	{
		board[i] = 0;
		i++;
	}
	find_queen(board, 0, &cnt);
	return (cnt);
}
/*#include<stdio.h>
int main()
{
	printf("%d\n", ft_ten_queens_puzzle());
}*/
