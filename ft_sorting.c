# include "push_swap.h"

int	is_stack_sorted(stack_node *stack) // function " bool type but with int "  need to check if the stack is sorted 
{
	if (stack == NULL)
		return (1);
	while (stack->next != NULL)
	{
		if (stack->data > stack->next->data)
			return (0);
		stack = stack->next;
	}
	return (1);
}

int	stack_len(stack_node *stack)
{
	int num;

	if (stack == NULL)
		return 0;
	num = 0;
	while (stack->next != NULL)
	{
		stack = stack->next;
		num++;
	}
	return (num);
}

void	sort_three(stack_node **stack)
{
	stack_node	*biggest_n;

	//if (stack == NULL)
		//return ;
	write(1, "sorting3\n", 9);
	biggest_n = biggest_node(*stack);
	if (biggest_n == *stack)
		ra(stack, 0);
	//else if (biggest_n == (*stack)->next)
	else if ((*stack)->next == biggest_n )
		rra(stack, 0);
	//if (!is_stack_sorted(*stack))
	if ((*stack)->data > (*stack)->next->data)
		sa(stack, 0);
}