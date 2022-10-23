/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/13 19:59:27 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/18 15:22:17 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_list.h"
#include <stdlib.h>
#include <stdio.h>
int		ft_strcmp(void *data1, void *data2)
{
	return (*(int *)data1 - *(int *)data2);
}
void	ft_free(void *data)
{
	printf("-- del data %d --\n", *(int *)data);
	data = NULL;
}
t_list	*ft_create_elem(void *data)
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
		printf("%d\n", *(int *)head->data);
		head = head->next;
	}
}
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
	t_list	*tmp;
	t_list	*i;

	while (*begin_list && cmp((*begin_list)->data, data_ref) == 0)
	{
		tmp = *begin_list;
		*begin_list = (*begin_list)->next;
		free(tmp);
	}
	i = *begin_list;
	while (i && i->next)
	{
		if (cmp(i->next->data, data_ref) == 0)
		{
			tmp = i->next;
			i->next = tmp->next;
			free (tmp);
		}
		i = i->next;
	}
}
int	main(void)
{
	t_list	*head;
	t_list	*curr;
	int		arr[5] = { 0, 1, 0, 1, 0 };
	int		del	= 1;
	void	*ptr[5];
	void	*del_ptr = &del;
	for (int i = 0; i < 5; i++)
	{
		ptr[i] = &arr[i];
	}
	head = ft_create_elem(ptr[0]);
	curr = head;
	for (int i = 1; i < 5; i++)
	{
		curr->next = ft_create_elem(ptr[i]);
		curr = curr->next;
	}
	display(head);
	printf("\n");
	ft_list_remove_if(&head, del_ptr, ft_free, ft_strcmp);
	display(head);
	return (0);
}
