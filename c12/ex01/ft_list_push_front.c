/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_front.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 22:27:19 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/15 22:41:37 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
void	ft_list_push_front(t_list **begin_list, void *data);
void	ft_list_push_front(t_list **begin_list, void *data)
{
	t_list *push;
	if(*begin_list)
	{
		push = ft_create_elem(data);
		push->next = *begin_list;
		*begin_list = push;
	}
	else
		*begin_list = ft_create_elem(data);
}
#include<stdio.h>
int		main(void)
{
	t_list	elem1, elem2, elem3, *begin;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = 0;

	elem1.data = "test1";
	elem2.data = "test2";
	elem3.data = "test3";

	ft_list_push_front(&begin, "start");
	while (begin)
	{
		printf("%s\n", begin->data);
		begin = begin->next;
	}
}

