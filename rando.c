#include "push_swap.h"

void	sort_five(stack_node **stack_a, stack_node **stack_b)
{
	int	size;

	size = stack_len(*stack_a);
	while (size--)
	{
		if ((*stack_a)->index == 0 || (*stack_a)->index == 1)
			push_b(stack_a, stack_b);
		else
			rotate_a(stack_a);
	}
	sort_three(stack_a);
	pa(stack_a, stack_b);
	pa(stack_a, stack_b);
	if ((*stack_a)->data > (*stack_a)->next->data)
		sa(stack_a);
}


void	radix_sort(stack_node **stack_a, stack_node **stack_b)
{
	int	biggest_nbr;
	int	max_bits;
	int	i;
	int	j;

	biggest_nbr = biggest_node(*stack_a);
	max_bits = find_bits(biggest_nbr); ///////////////////////////
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j <= biggest_nbr)
		{
			if (((*stack_a)->data >> i) & 1)
				ra(stack_a);
			else
				pb(stack_a, stack_b);
			j++;
		}
		while (*stack_b)
			pa(stack_a, stack_b);
		i++;
	}
}

void	sort_stack(stack_node **stack_a, stack_node **stack_b)
{
	int	size;

	size = stack_len(*stack_a);
	if (!is_stack_sorted(stack_a) && size <= 3)
		sort_three(stack_a);
	else if (!is_stack_sorted(stack_a) && size <= 5)
		sort_five(stack_a, stack_b);
	else if (!is_stack_sorted(stack_a))
		radix_sort(stack_a, stack_b);
	else
	{
		free_stack(stack_a);
		free_stack(stack_b);
	}
}