/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   logic_plus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:25:06 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/19 11:25:10 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "bsq.h"

int	**alloc_dp(t_file_info *read_file)
{
	int	**dp;
	int	i;

	dp = (int **)malloc(sizeof(int *) * read_file->line - 1);
	if (!dp)
		return (0);
	i = 0;
	while (i < read_file->line - 1)
	{
		dp[i] = (int *)malloc(sizeof(int) * read_file->cell_nums[1]);
		if (!dp[i])
		{
			free_all_dp(dp, i);
			return (0);
		}
		i++;
	}
	return (dp);
}

void	free_all_dp(int **pptr, int i)
{
	int	j;

	j = 0;
	while (j < i)
	{
		free(pptr[j]);
		j++;
	}
	free(pptr);
}

int	dp_main(int **dp, t_file_info *read_file)
{
	int	i;
	int	j;
	int	max;

	i = 1;
	max = 1;
	while (i < read_file->line - 1)
	{
		j = 1;
		while (j < read_file->cell_nums[1])
		{
			if (dp[i][j] != 0)
			{
				dp[i][j] = min(dp[i - 1][j - 1], dp[i - 1][j], \
						dp[i][j - 1]) + 1;
				if (dp[i][j] > max)
					max = dp[i][j];
			}
			j++;
		}
		i++;
	}
	return (max);
}
