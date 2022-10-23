/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_create_elem.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 21:40:24 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/16 20:59:51 by suhwpark         ###   ########.fr       */
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
void	display(t_list *head)
{
	while(head)
	{
		printf("%d\n", *(int *)head->data);
		head = head->next;
	}
}

