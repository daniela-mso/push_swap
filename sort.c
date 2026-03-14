/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 23:25:50 by danielad          #+#    #+#             */
/*   Updated: 2026/03/15 00:00:35 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	is_sorted(t_stack *stack)
{
	if (!stack)
		return (1);
	while (stack->next)
	{
		if (stack->value > stack->next->value)
			return (0);
		stack = stack->next;
	}
	return (1);
}

void	sort_three(t_stack **stack)
{
	t_stack	*biggest_n;

	if (stack == NULL || *stack == NULL || (*stack)->next == NULL)
		return ;
	biggest_n = biggest_node(*stack);
	if (biggest_n == *stack)
		ra(stack);
	else if ((*stack)->next == biggest_n)
		rra(stack);
	if ((*stack)->value > (*stack)->next->value)
		sa(stack);
}

void	sort_five(t_stack **a, t_stack **b)
{
	t_stack	*min;
	int		pos;
	int		len;

	while (stack_len(*a) > 3)
	{
		min = smallest_node(*a);
		pos = get_position(*a, min);
		len = stack_len(*a);
		if (pos <= len / 2)
		{
			while (*a != min)
				ra(a);
		}
		else
		{
			while (*a != min)
				rra(a);
		}
		pb(a, b);
	}
	sort_three(a);
	while (*b)
		pa(a, b);
}

void	radix_sort(t_stack **a, t_stack **b)
{
	int	i;
	int	j;
	int	size;
	int	max_bits;

	size = stack_len(*a);
	max_bits = 0;
	while (((size - 1) >> max_bits) != 0)
		max_bits++;
	i = 0;
	while (i < max_bits)
	{
		j = 0;
		while (j < size)
		{
			if ((((*a)->index >> i) & 1) == 0)
				pb(a, b);
			else
				ra(a);
			j++;
		}
		while (stack_len(*b) > 0)
			pa(a, b);
		i++;
	}
}

void	sort(t_stack **a, t_stack **b)
{
	int	size;

	size = stack_len(*a);
	if (size == 2)
		sa(a);
	else if (size == 3)
		sort_three(a);
	else
		radix_sort(a, b);
}
