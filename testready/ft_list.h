/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:44:28 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/15 15:05:24 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FH_LIST_H
# define FH_LIST_H
typedef struct s_list t_list;

struct s_list
{
	int     data;
	t_list  *next;
};
#endif
