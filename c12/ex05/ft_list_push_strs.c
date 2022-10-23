/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_push_strs.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 20:37:05 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/16 21:00:30 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include<stdlib.h>

t_list *ft_list_push_strs(int size, char **strs)
{
	t_list *head;
	t_list *curr;
	t_list *tmp;
	int i;
	curr = ft_create_elem(strs[size - 1]);
	head = curr;
	i = 1;
	while(i < size)
	{
		tmp = ft_create_elem(strs[size - i - 1]);
		curr->next = tmp;
		curr = curr->next;
		i++;
	}
	return(head);
}
#include<stdio.h>
int main()
{
	t_list *push;
	char *str[] = {"12", "1234", "adsf", "vvvv", "dfdfwf" };
	push = ft_list_push_strs(5, str);
	while(push)
	{
		printf("%s\n", (char *)push->data);
		push = push->next;
	}
}
