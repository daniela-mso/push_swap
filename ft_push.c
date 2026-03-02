# include "push_swap.h"

static void	push(stack_node **src, stack_node **dest)
{
	stack_node *pushed_node;

	if (*src == NULL)
		return ;
	pushed_node = *src;
	*src = (*src)->next;
	if (*src != NULL)
		(*src)->prev = NULL;
	pushed_node->prev = NULL; //--------------------
	if (*dest == NULL)
	{
		*dest = pushed_node;
		pushed_node->next = NULL;
	}
	else
	{
		pushed_node->next = *dest;
		pushed_node->next->prev = pushed_node;
		*dest = pushed_node;
	}
	
}

void	pa(stack_node **a, stack_node **b, int print)
{
	push(a, b);
	if (print == 0)
		write(1, "pa\n", 3);
}

void	pb(stack_node **a, stack_node **b, int print)
{
	push(b, a);
	if (print == 0)
		write(1, "pb\n", 3);	
}
