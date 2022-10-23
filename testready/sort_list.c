/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_list.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 12:46:30 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/15 21:31:57 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <unistd.h>
#include <stdlib.h>

t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
	int		tmp_data;
	t_list	*head;

	head = lst;
	while (lst->next != NULL)
	{
		if (!cmp(lst->data, lst->next->data))
		{
			tmp_data = lst->data;
			lst->data = lst->next->data;
			lst->next->data = tmp_data;
			lst = head;
		}
		else
			lst = lst->next;
	}
	return (head);
}

#include <stdio.h>
int		ft_strcmp(int data1, int data2)
{
	return (data1 <= data2);
}
void	ft_free(int data)
{
	printf("-- del data %d --\n", data);
	data = -1;
}
t_list	*ft_create_elem(int data)
{
	t_list *node;
	node = (t_list *)malloc(sizeof(t_list));
	if (node)
	{
		node->next = NULL;
		node->data = data;
	}
	return (node);
}
void	display(t_list *head)
{
	while (head)
	{
		printf("%d\n", head->data);
		head = head->next;
	}
}
int	main(void)
{
	t_list	*head;
	t_list	*curr;
	int		arr[5] = { 5, 0, 2, 3, 1 };
//	int		del	= 1;
	head = ft_create_elem(arr[0]);
	curr = head;
	for (int i = 1; i < 5; i++)
	{
		curr->next = ft_create_elem(arr[i]);
		curr = curr->next;
	}
	display(head);
	printf("\n");
	sort_list(head, ft_strcmp);
	display(head);
	return (0);
}
