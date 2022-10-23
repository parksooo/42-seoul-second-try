/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:39:47 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/15 21:40:06 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FH_LIST_H
# define FH_LIST_H
typedef struct s_list
{
	struct s_list *next;
	void *data;
} t_list;
#endif
