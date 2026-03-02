# include "push_swap.h"

void	ft_append_node(stack_node **stack, int num) //need to search for the last existing node so i can append 
{
	stack_node *new_node; 
	stack_node *last_node;


	if (stack == NULL)
		return ;

	new_node = malloc(sizeof(stack_node));

	if (new_node == NULL)
		return ;

	new_node->next = NULL;
	new_node->data = num;
	new_node->cheapest = 0;////////////////////////////////

	if (*stack == NULL) //if the linked list is empty i make the new node the head
	{
		*stack = new_node;
		new_node->prev = NULL;
	}
	else
	{
	last_node = find_last_node(*stack);
	last_node->next = new_node;
	new_node->prev = last_node;
	}
}

stack_node *biggest_node(stack_node *stack)
{
	stack_node	*biggest;
	long		max_found;

	if (stack == NULL)
		return (NULL);
	max_found = LONG_MIN;
	while (stack != NULL)
	{
		if (stack->data > max_found)
		{
			max_found = stack->data;
			biggest = stack;
		}
		stack = stack->next;
	}
	return (biggest);
}

stack_node	*smallest_node(stack_node *stack)
{
	stack_node	*smallest;
	long		min_found;

	if (stack == NULL)
		return (NULL);
	min_found = LONG_MAX;
	while (stack != NULL)
	{
		if (stack->data < min_found)
		{
			min_found = stack->data;
			smallest = stack;
		}
		stack = stack->next;
	}
	return (smallest);
}

stack_node	*find_last_node(stack_node *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

