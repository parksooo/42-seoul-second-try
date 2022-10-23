/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:40:24 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/15 22:37:59 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include<stdlib.h>
#include<stdio.h>
t_list	*ft_create_elem(void *data)
{
	t_list *node;
	node = (t_list *)malloc(sizeof(t_list));
	if(node)
	{
		node->next = NULL;
		node->data = data;
	}
	return (node);
}
/*void	display(t_list *head)
{
	while(head)
	{
		printf("%llu\n", (unsigned long long)head->data);
		head = head->next;
	}
}
int main()
{
	t_list *head;
	t_list *curr;
	int arr[10] = {1, 3, 4, 5, 6, 7, 8, 11, 22, 99};
	head = ft_create_elem(&arr[0]);
	curr = head;
	for(int i = 1; i < 10; i++)
	{
		curr->next = ft_create_elem(&arr[i]);
		curr = curr->next;
	}
	display(head);
}*/
