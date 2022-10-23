/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_back.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 15:23:28 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/16 16:22:34 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
void ft_list_push_back(t_list **begin_list, void *data)
{
	t_list *push;
	push = *begin_list;
	if(push)
	{
		while(push->next)
		{
			push = push->next;
		}
		push->next = ft_create_elem(data);
	}
	else
		*begin_list = ft_create_elem(data);
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	t_list *begin, elem1, elem2, elem3, elem4;
	t_list *head;
	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = &elem4;
	elem4.next = 0;

	elem1.data = "1234";
	elem2.data = "5678";
	elem3.data = "9abcd";
	elem4.data = "efgh";

	head = begin;
	ft_list_push_back(&begin, "ijklmno");
	while(head)
	{
		printf("%s\n", head->data);
		head = head->next;
	}
}
