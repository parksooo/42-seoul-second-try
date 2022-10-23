/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_at.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:57:10 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/16 22:11:42 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
t_list *ft_list_at(t_list *begin_list, unsigned int nbr)
{
	unsigned int i;
	t_list *tmp;

	i = 0;
	if(nbr == 0)
		return (begin_list);
	while(begin_list)
	{
		if(i == nbr - 1)
			return(begin_list);
		else
			i++;
		begin_list = begin_list->next;
	}
	return (0);
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

	elem1.data = "123";
	elem2.data = "789";
	elem3.data = "100";
	elem4.data = "9955";
	elem5.data = "999";

	printf("%s\n", (void *)ft_list_at(begin, 3)->data);
}
