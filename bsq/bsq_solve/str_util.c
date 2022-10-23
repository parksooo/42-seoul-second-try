/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_util.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/19 11:25:47 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/19 11:26:06 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	count_strline(char *str)
{
	int	line_num;
	int	i;

	line_num = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '\n' || str[i] == '\0')
			line_num++;
		i++;
	}
	return (line_num);
}

void	count_len_per_line(int *lines, char *str)
{
	int	i;
	int	j;
	int	line;

	i = 0;
	j = 0;
	line = 0;
	while (str[i])
	{
		if (str[i] == '\n' || str[i] == '\0')
		{
			lines[line] = j;
			j = 0;
			line++;
		}
		else
			j++;
		i++;
	}
}
