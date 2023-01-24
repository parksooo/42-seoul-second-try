#include "../includes/push_swap.h"
#include "greedy_algorithm.c"
#include "command_swap.c"
#include "command_reverse_rotate.c"
#include "command_rotate.c"
#include "que_set.c"
int main()
{
	t_deque *q;
	int arr[] = {1, 2, 3};

	q = init(4);
	add_rear(q, 2);
	add_rear(q, 2);
	add_rear(q, 3);
	// a_stack_sort(q);
	check_duplication(q);
	printf("%d\n", q->data[(q->front + 1) % 4]);
	printf("%d\n", q->data[(q->front + 2) % 4]);
	printf("%d\n", q->data[q->rear]);
}
