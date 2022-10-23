/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_foreach.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 11:44:06 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/17 12:18:50 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
void ft_list_foreach(t_list *begin_list, void (*f)(void *))
{
	t_list *list_ptr;

	list_ptr = begin_list;
	while(begin_list)
	{
		(*f)(list_ptr->data);
		list_ptr = list_ptr->next;
	}
}

#include<stdio.h>
int main()
{
	t_list *begin, elem1, elem2, elem3, elem4, elem5;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = &elem4;
	elem4.next = &elem5;
	elem5.next = 0;

	elem1.data = "5";
	elem2.data = "4";
	elem3.data = "3";
	elem4.data = "2";
	elem5.data = "1";


	ft_list_foreach(begin, f);
	while(begin)
	{
		printf("%s\n", (char *)begin->data);
	}
}
