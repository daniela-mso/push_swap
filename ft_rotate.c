# include "push_swap.h"

static void	rotate(stack_node **stack) //rotates the top node to the bottom 
{
	stack_node *last_n;

	if (*stack == NULL || (*stack)->next == NULL) // need tocheck if the stack is empty or if there is only one node
		return ;
	last_n = find_last_node(*stack);
	last_n->next = *stack;
	*stack = (*stack)->next;
	(*stack)->prev = NULL;
	last_n->next->prev = last_n;
	last_n->next->next = NULL;
}

void	ra(stack_node **a, int print)
{
	rotate(a);
	if (print == 0)
		write(1, "ra\n", 3);
}

void	rb(stack_node **b, int print)
{
	rotate(b);
	if (print == 0)
		write(1, "rb\n", 3);
}

void	rr(stack_node **a, stack_node **b, int print)
{
	rotate(a);
	rotate(b);
	if (print == 0)
		write(1, "rr\n", 3);
}
