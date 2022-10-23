/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_list_clear.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42seoul.>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/16 21:21:48 by suhwpark          #+#    #+#             */
/*   Updated: 2022/10/16 21:56:09 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_list.h"
void ft_list_clear(t_list *begin_list, void (*free_fct)(void *))
{
	t_list *tmp;
	
	tmp = begin_list;
	while(begin_list)
	{
		tmp = begin_list;
		begin_list = begin_list->next;
		free_fct(tmp);
	}
}

#include<stdio.h>
int main()
{
	
}
