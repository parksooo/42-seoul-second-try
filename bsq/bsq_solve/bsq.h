/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsq.h                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:23:54 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/19 13:38:58 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BSQ_H
# define BSQ_H

typedef struct s_file
{
	int	line;
	int	*cell_nums;
}	t_file_info;

typedef struct s_map
{
	int		line_num;
	char	info[3];
	char	**tiles;
	int		max_y;
	int		max_x;
}	t_map;

int		count_strline(char *str);
void	count_len_per_line(int *lines, char *str);

void	print_error(void);
int		read_file(char *file_name, char bf[], int bf_size);
int		alloc_map(t_map *map, t_file_info *read_file);
void	free_all(char **pptr, int i);
void	flush_bf(char bf[]);

int		stoi(char *str, char **end, int len);
int		parsing_map_info(t_file_info *read_file, t_map *map, char *read_line);
int		pre_valid_map(t_map *map, t_file_info *read_file);
int		set_tile(t_file_info *read_file, t_map *map, char *read_line);

int		logic(t_file_info *read_file, t_map *map);
int		min(int a, int b, int c);

int		**alloc_dp(t_file_info *read_file);
void	free_all_dp(int **pptr, int i);
int		dp_main(int **dp, t_file_info *read_file);

void	std_input(char *bf, int bf_size);

#endif
