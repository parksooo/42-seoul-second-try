/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_reverse.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 10:41:40 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/17 11:34:21 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include<stdio.h>
void ft_list_push(t_list **begin_list, t_list *tmp)
{
	if(begin_list)
	{
		tmp->next = *begin_list;
		*begin_list = tmp;
	}
	else
		*begin_list = tmp;
}
void ft_list_reverse(t_list **begin_list)
{
	t_list *reverse;
	t_list *curr;
	t_list *next;
	
	reverse = 0;
	curr = *begin_list;
	while(curr)
	{
		next = curr->next;
		ft_list_push(&reverse, curr);
		curr = next;
	}
	*begin_list = reverse;
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

	ft_list_reverse(&begin);

	while(begin)
	{
		printf("%s\n", begin->data);
		begin = begin->next;
	}

}
