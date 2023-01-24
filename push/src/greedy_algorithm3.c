/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   greedy_algorithm3.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: suhwpark <suhwpark@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/19 18:39:31 by sohyupar          #+#    #+#             */
/*   Updated: 2023/01/20 18:18:17 by suhwpark         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/push_swap.h"

void	use_rrb(t_deque *a_stack, t_deque *b_stack, int ra_count, int rrb_count)
{
	int	a_size;

	a_size = get_stack_size(a_stack);
	if (ra_count > a_size / 2)
	{
		ra_count = a_size - ra_count;
		while (ra_count && rrb_count && (ra_count-- && rrb_count--))
			rrr(a_stack, b_stack);
		if (ra_count < rrb_count)
		{
			while (rrb_count && rrb_count--)
				rrb(b_stack);
		}
		else if (rrb_count < ra_count)
		{
			while (ra_count && ra_count--)
				rra(a_stack);
		}
	}
	else
	{
		while (ra_count && ra_count--)
			ra(a_stack);
		while (rrb_count && rrb_count--)
			rrb(b_stack);
	}
}

void	use_rb(t_deque *a_stack, t_deque *b_stack, int ra_count, int rb_count)
{
	int	a_size;

	a_size = get_stack_size(a_stack);
	if (ra_count < a_size / 2)
	{
		while (ra_count && rb_count && (ra_count-- && rb_count--))
			rr(a_stack, b_stack);
		if (ra_count < rb_count)
		{
			while (rb_count && rb_count--)
				rb(b_stack);
		}
		else if (rb_count < ra_count)
		{
			while (ra_count && ra_count--)
				ra(a_stack);
		}
	}
	else
	{
		ra_count = a_size - ra_count;
		while (ra_count && ra_count--)
			rra(a_stack);
		while (rb_count && rb_count--)
			rb(b_stack);
	}
}

int	get_a_min_index(t_deque *a_stack)
{
	int	i;
	int	len;
	int	min;
	int	min_index;

	i = 0;
	min = a_stack->data[find_idx((a_stack->front + 1), a_stack->len)];
	min_index = find_idx((a_stack->front + 1), a_stack->len);
	len = get_stack_size(a_stack);
	while (++i < len)
	{
		if (a_stack->data[find_idx((a_stack->front + 1 + i), a_stack->len)] < min)
		{
			min = a_stack->data[find_idx((a_stack->front + 1 + i), a_stack->len)];
			min_index = find_idx((a_stack->front + 1 + i), a_stack->len);
		}
	}
	return (min_index);
}

int	get_a_max_index(t_deque *a_stack)
{
	int	i;
	int	len;
	int	max;
	int	max_index;

	i = 0;
	max = a_stack->data[find_idx((a_stack->front + 1), a_stack->len)];
	max_index = find_idx((a_stack->front + 1 + i), a_stack->len);
	len = get_stack_size(a_stack);
	while (++i < len)
	{
		if (a_stack->data[find_idx((a_stack->front + 1 + i), a_stack->len)] > max)
		{
			max = a_stack->data[find_idx((a_stack->front + 1 + i), a_stack->len)];
			max_index = find_idx((a_stack->front + 1 + i), a_stack->len);
		}
	}
	return (max_index);
}
