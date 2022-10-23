/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkboard.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:43:01 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/09 18:49:23 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_top(int board[4][4], int *top)
{
	int	i;
	int	j;
	int	height;
	int	cnt;

	i = 0;
	while (i < 4)
	{
		j = 0;
		cnt = 0;
		height = 0;
		while (j < 4)
		{
			if (height < board[j][i])
			{
				height = board[j][i];
				cnt++;
			}
			j++;
		}
		if (cnt != top[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_bottom(int board[4][4], int *bottom)
{
	int	i;
	int	j;
	int	height;
	int	cnt;

	i = 0;
	while (i < 4)
	{
		j = 3;
		cnt = 0;
		height = 0;
		while (j >= 0)
		{
			if (height < board[j][i])
			{
				height = board[j][i];
				cnt++;
			}
			j--;
		}
		if (cnt != bottom[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_left(int board[4][4], int *left)
{
	int	i;
	int	j;
	int	height;
	int	cnt;

	i = 0;
	while (i < 4)
	{
		j = 0;
		cnt = 0;
		height = 0;
		while (j < 4)
		{
			if (height < board[i][j])
			{
				height = board[i][j];
				cnt++;
			}
			j++;
		}
		if (cnt != left[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_right(int board[4][4], int *right)
{
	int	i;
	int	j;
	int	height;
	int	cnt;

	i = 0;
	while (i < 4)
	{
		j = 3;
		cnt = 0;
		height = 0;
		while (j >= 0)
		{
			if (height < board[i][j])
			{
				height = board[i][j];
				cnt++;
			}
			j--;
		}
		if (cnt != right[i])
			return (0);
		i++;
	}
	return (1);
}

int	check_board(int board[4][4], int input[16])
{
	if (check_top(board, &input[0]) == 0)
		return (0);
	if (check_bottom(board, &input[4]) == 0)
		return (0);
	if (check_left(board, &input[8]) == 0)
		return (0);
	if (check_right(board, &input[12]) == 0)
		return (0);
	return (1);
}
