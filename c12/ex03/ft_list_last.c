/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_last.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 14:46:49 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/16 15:13:27 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include"ft_list.h"
#include<stdio.h>
t_list *ft_list_last(t_list *begin_list)
{
	t_list *find;
	find = begin_list;
	while(find)
	{
	//	printf("%s\n", (void *)find->data);
		if(!find->next)
		{
	//		printf("break : %s\n", (void *)find->data);
			break;
		}
		find = find->next;
	}
	return (find);
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	t_list *begin, elem1, elem2, elem3, elem4, elem5;

	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = &elem4;
	elem4.next = &elem5;
	elem5.next = 0;

	elem1.data = "1234";
	elem2.data = "test";
	elem3.data = "bbbb";
	elem4.data = "5656";
	elem5.data = "qsq";
//	ft_list_last(begin);
	printf("%s\n", (void *)ft_list_last(begin)->data);

}
