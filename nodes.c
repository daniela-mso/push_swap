/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   nodes.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 23:42:15 by danielad          #+#    #+#             */
/*   Updated: 2026/03/14 23:47:11 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

t_stack	*find_last_node(t_stack *stack)
{
	if (stack == NULL)
		return (NULL);
	while (stack->next != NULL)
		stack = stack->next;
	return (stack);
}

void	add_back(t_stack **stack, int val)
{
	t_stack	*new;
	t_stack	*tmp;

	new = malloc(sizeof(t_stack));
	new->value = val;
	new->next = NULL;
	if (*stack == NULL)
	{
		*stack = new;
		return ;
	}
	tmp = *stack;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = new;
}

int	stack_len(t_stack *stack)
{
	int	num;

	if (stack == NULL)
		return (0);
	num = 0;
	while (stack != NULL)
	{
		num++;
		stack = stack->next;
	}
	return (num);
}

t_stack	*biggest_node(t_stack *stack)
{
	t_stack	*biggest;
	long	max_found;

	if (stack == NULL)
		return (NULL);
	max_found = LONG_MIN;
	biggest = stack;
	while (stack != NULL)
	{
		if (stack->value > max_found)
		{
			max_found = stack->value;
			biggest = stack;
		}
		stack = stack->next;
	}
	return (biggest);
}

t_stack	*smallest_node(t_stack *stack)
{
	t_stack		*smallest;
	long		min_found;

	if (stack == NULL)
		return (NULL);
	min_found = LONG_MAX;
	while (stack != NULL)
	{
		if (stack->value < min_found)
		{
			min_found = stack->value;
			smallest = stack;
		}
		stack = stack->next;
	}
	return (smallest);
}
