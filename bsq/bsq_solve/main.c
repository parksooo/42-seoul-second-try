/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:25:16 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/19 21:43:49 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "bsq.h"

void	parsing_str(char *bf);
void	parsing_map(t_file_info *read_file, char *bf);

int	main(int argc, char **argv)
{
	char	bf[2000000];
	int		file_num;

	if (argc < 2)
	{
		std_input(bf, sizeof(bf));
		parsing_str(bf);
	}
	else
	{
		file_num = 1;
		while (file_num < argc)
		{
			if (!read_file(argv[file_num], bf, sizeof(bf)))
				print_error();
			else
				parsing_str(bf);
			if (argc > 2 && file_num != argc - 1)
				write(1, "\n", 1);
			file_num++;
			flush_bf(bf);
		}
	}
}

void	parsing_str(char *bf)
{
	t_file_info	read_file;

	read_file.line = count_strline(bf);
	read_file.cell_nums = (int *)malloc(sizeof(int) * read_file.line);
	if (!read_file.cell_nums)
	{
		print_error();
		return ;
	}
	count_len_per_line(read_file.cell_nums, bf);
	parsing_map(&read_file, bf);
	free(read_file.cell_nums);
}

void	parsing_map(t_file_info *read_file, char *bf)
{
	t_map	map;

	if (!(parsing_map_info(read_file, &map, bf) && \
					pre_valid_map(&map, read_file) && \
					alloc_map(&map, read_file)))
	{
		print_error();
		return ;
	}
	if (!set_tile(read_file, &map, bf))
	{
		print_error();
		free_all(map.tiles, read_file->line - 1);
		return ;
	}
	if (!logic(read_file, &map))
		print_error();
	free_all(map.tiles, read_file->line - 1);
}
