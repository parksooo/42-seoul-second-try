/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   etc_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:24:43 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/19 11:24:48 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

#include "bsq.h"

void	print_error(void)
{
	write(2, "map error\n", 10);
}

int	read_file(char *file_name, char bf[], int bf_size)
{
	int	fd;

	fd = open(file_name, O_RDONLY | O_NONBLOCK);
	if (fd == -1)
		return (0);
	if (read(fd, bf, bf_size) == -1)
	{
		close(fd);
		return (0);
	}
	if (close(fd) == -1)
		return (0);
	return (1);
}

void	flush_bf(char bf[])
{
	int	i;

	i = 0;
	while (i < 2000000)
		bf[i++] = 0;
}

int	alloc_map(t_map *map, t_file_info *read_file)
{
	int	i;

	map->tiles = (char **)malloc(sizeof(char *) * (read_file->line - 1));
	if (!map)
		return (0);
	i = 0;
	while (i < read_file->line - 1)
	{
		map->tiles[i] = (char *)malloc(sizeof(char) * \
				(read_file->cell_nums[1]));
		if (!map->tiles[i])
		{
			free_all(map->tiles, i);
			return (0);
		}
		i++;
	}
	return (1);
}

void	free_all(char **pptr, int i)
{
	int	_i;

	_i = 0;
	while (_i < i)
	{
		free(pptr[_i]);
		_i++;
	}
	free(pptr);
}
