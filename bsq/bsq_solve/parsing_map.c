/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parsing_map.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:25:39 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/19 17:49:21 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "bsq.h"

int	stoi(char *str, char **end, int len)
{
	int	n;
	int	i;
	int	num_info;

	i = 0;
	n = 0;
	while (i < len - 3)
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			break ;
		n = n * 10 + str[i] - '0';
		i++;
	}
	if (i == 0)
		return (-1);
	*end = str + i;
	num_info = 0;
	while (*(str + i + num_info) != '\n')
		num_info++;
	if (num_info != 3)
		return (0);
	return (n);
}

int	parsing_map_info(t_file_info *read_file, t_map *map, char *read_line)
{
	int		i;
	int		j;
	char	*end;

	map->line_num = stoi(read_line, &end, read_file->cell_nums[0]);
	if (map->line_num < 1)
		return (0);
	i = -1;
	while (++i < 3)
	{
		j = i;
		while (++j < 3)
			if (end[i] == end[j])
				return (0);
	}
	i = -1;
	while (++i < 3)
	{
		if (!(end[i] >= 32 && end[i] <= 126))
			return (0);
		map->info[i] = end[i];
	}
	return (1);
}

int	pre_valid_map(t_map *map, t_file_info *read_file)
{
	int	col_num;
	int	i;

	if (map->line_num != read_file->line - 1)
	{
		return (0);
	}
	if (read_file->line - 1 < 1)
		return (0);
	col_num = read_file->cell_nums[1];
	i = 2;
	while (i < map->line_num)
	{
		if (col_num != read_file->cell_nums[i])
			return (0);
		i++;
	}
	return (1);
}

int	set_tile(t_file_info *read_file, t_map *map, char *read_line)
{
	int		i;
	int		j;
	char	c;

	i = 0;
	while (i < read_file->line - 1)
	{
		j = 0;
		while (j < read_file->cell_nums[1])
		{
			c = read_line[read_file->cell_nums[0] + 1 + \
				(read_file->cell_nums[1] * i) + i + j];
			if (!(c == map->info[0] || c == map->info[1]))
				return (0);
			map->tiles[i][j] = c;
			j++;
		}
		i++;
	}
	return (1);
}
