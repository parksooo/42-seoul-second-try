/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_remove_if.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/17 14:38:37 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/18 14:34:40 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
#include <stdlib.h>
t_list	*ft_create_elme(void *data);
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *));
int		ft_strcmp(void *data1, void *data2);
void	ft_free(void *data);
void	ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)(), void (*free_fct)(void *))
{
	t_list *curr;
	t_list *prev;
	curr = *begin_list;
	while (curr && !cmp(curr->data, data_ref))
	{
		*begin_list = curr->next;
		free_fct(curr->data);
		free(curr);
		curr = *begin_list;
	}
	while (curr)
	{
		if(!cmp(curr->data, data_ref))
		{
			prev->next = curr->next;
			free_fct(curr->data);
			free(curr);
			curr = prev;
		}
		prev = curr;
		curr = curr->next;
	}
}
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
	ft_list_remove_if(&head, del_ptr, ft_strcmp, ft_free);
	display(head);
	return (0);
}
