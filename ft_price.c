#include "push_swap.h"

stack_node	*get_cheapest(stack_node *stack) //Define a function that searches for the cheapest node
{
	if (stack == NULL)
		return (NULL);
	while (stack != NULL)
	{
		if (stack->cheapest == 1)
			return (stack);
		stack = stack->next;
	}
	return (NULL);
}

void	prep_for_push(stack_node **stack, stack_node *top_node, char stack_name) //Define a function that moves the required node to the top of the stack
{
	while (*stack != top_node) //Check if the required node is not already the first node
	{
		if (stack_name == 'a') //If not, and it is stack `a`, execute the following
		{
			if (top_node->above_median == 1)
				ra(stack, 0);
			else
				rra(stack, 0);
		}
		else if (stack_name == 'b') //If not, and it is stack `b`, execute the following
		{
			if (top_node->above_median == 1)
				rb(stack, 0);
			else
				rrb(stack, 0);
		}	
	}
}