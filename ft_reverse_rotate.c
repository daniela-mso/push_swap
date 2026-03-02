#include "push_swap.h"

static void	reverse_rotate(stack_node **stack)
{
	stack_node *last;

	if (stack == NULL || (*stack)->next == NULL)
		return ;
	last = find_last_node(*stack);
	last->prev->next = NULL;
	last->next = *stack;
	last->prev = NULL;
	*stack = last;
	last->next->prev = last;
}

void	rra(stack_node **a, int print)
{
	reverse_rotate(a);
	if (print == 0)
		write(1, "rra\n", 4);
}

void	rrb(stack_node **b, int print)
{
	reverse_rotate(b);
	if (print == 0)
		write(1, "rrb\n", 4);
}

void	rrr(stack_node **a, stack_node **b, int print)
{
	reverse_rotate(a);
	reverse_rotate(b);
	if (print == 0)
		write(1, "rrr\n", 4);
}
