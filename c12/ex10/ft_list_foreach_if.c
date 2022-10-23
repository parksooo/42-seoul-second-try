/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach_if.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 12:21:53 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/17 12:27:13 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_list_foreach_if(t_list *begin_list, void (*f)(void *), void *data_ref, int (*cmp)())
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while(list_ptr)
	{
		if(!cmp(list_ptr->data, data_ref))
			f(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}
