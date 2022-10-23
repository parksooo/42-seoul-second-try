/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:24:54 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/19 21:47:18 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "bsq.h"

void	pre_dp(t_file_info *read_file, t_map *map, int **dp)
{
	int	i;
	int	j;

	i = 0;
	while (i < read_file->line - 1)
	{
		j = 0;
		while (j < read_file->cell_nums[1])
		{
			if (map->tiles[i][j] == map->info[0])
				dp[i][j] = 1;
			else if (map->tiles[i][j] == map->info[1])
				dp[i][j] = 0;
			j++;
		}
		i++;
	}
}

int	min(int a, int b, int c)
{
	if (a <= b)
	{
		if (a <= c)
			return (a);
		else
			return (c);
	}
	else
	{
		if (b <= c)
			return (b);
		else
			return (c);
	}
}

void	print_answer(t_file_info *read_file, t_map *map, \
			int max)
{
	int	i;
	int	j;

	i = -1;
	while (++i < max)
	{
		j = -1;
		while (++j < max)
			map->tiles[map->max_y - i][map->max_x - j] = map->info[2];
	}
	i = -1;
	while (++i < read_file->line - 1)
	{
		j = -1;
		while (++j < read_file->cell_nums[1])
			write(1, &map->tiles[i][j], 1);
		write(1, "\n", 1);
	}
}

void	search_point_max(t_file_info *read_file, t_map *map, \
			int **dp, int max)
{
	int	i;
	int	j;
	int	is_max;

	i = -1;
	is_max = 0;
	while (++i < read_file->line - 1)
	{
		j = -1;
		while (++j < read_file->cell_nums[1])
		{
			if (dp[i][j] == max)
			{
				is_max = 1;
				break ;
			}
		}
		if (is_max)
			break ;
	}
	if (i == read_file->line - 1 && j == read_file->cell_nums[1])
		max = 0;
	map->max_y = i;
	map->max_x = j;
	print_answer(read_file, map, max);
}

int	logic(t_file_info *read_file, t_map *map)
{
	int	**dp;
	int	max;

	dp = alloc_dp(read_file);
	if (!dp)
		return (0);
	pre_dp(read_file, map, dp);
	max = dp_main(dp, read_file);
	search_point_max(read_file, map, dp, max);
	free_all_dp(dp, read_file-> line - 1);
	return (1);
}
