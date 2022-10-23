/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_merge.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 19:21:25 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/17 19:31:21 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_list_merge(t_list **begin_list1, t_list *begin_list2)
{
	t_list *list;

	list = *begin_list1;
	while(list)
	{
		list = list->next;
	}
	list->next = *begin_list2;
}
