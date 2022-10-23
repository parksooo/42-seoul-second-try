/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_size.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 13:45:53 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/16 14:46:29 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
int ft_list_size(t_list *begin_list)
{
	int cnt;

	cnt = 0;
	while(begin_list)
	{
		cnt++;
		begin_list = begin_list->next;
	}
	return (cnt);
}
#include<stdio.h>
#include<stdlib.h>
int main()
{
	t_list *begin, elem1, elem2, elem3, elem4;
	
	begin = &elem1;
	elem1.next = &elem2;
	elem2.next = &elem3;
	elem3.next = &elem4;
	elem4.next = 0;

	elem1.data = "2222";
	elem2.data = "1234";
	elem3.data = "1234";
	elem4.data = "123";
	printf("%d\n", ft_list_size(begin));

}
