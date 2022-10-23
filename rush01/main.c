/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 11:18:47 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/09 21:48:52 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	board_init(int board[4][4], int input[16]);
int		recursive_board(int board[4][4], int y, int x, int input[16]);
void	print_board(int board[4][4]);

int	check_argument_value(char *str, int *input)
{
	int	i;
	int	cnt;

	i = 0;
	cnt = 0;
	while (str[i])
	{
		if (i % 2 == 0)
		{
			if (cnt == 16)
				return (1);
			if (!(str[i] >= '1' && str[i] <= '4'))
				return (1);
			input[cnt] = str[i] - '0';
			cnt++;
		}
		else if (str[i] != ' ')
			return (1);
		i++;
	}
	if (!(cnt == 16 && i == 31))
		return (1);
	return (0);
}

int	main(int argc, char **argv)
{
	int	board[4][4];
	int	input[16];

	if (argc != 2 || check_argument_value(argv[1], input))
	{
		write(2, "Error\n", 6);
		return (0);
	}
	board_init(board, input);
	if (recursive_board(board, 0, 0, input))
		print_board(board);
	else
		write(2, "Error\n", 6);
	return (0);
}	
