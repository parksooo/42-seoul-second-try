/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_find.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:58:30 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/17 13:00:37 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

t_list *ft_list_find(t_list *begin_list, void *data_ref, int (*cmp)())
{
	while(begin_list)
	{
		if(!cmp(begin_list->data, data_ref))
			return (begin_list);
		begin_list = begin_list->next;
	}
	return (0);
}
