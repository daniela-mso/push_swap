/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 23:49:40 by danielad          #+#    #+#             */
/*   Updated: 2026/03/15 08:45:07 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	free_stack(t_stack **stack)
{
	t_stack	*tmp;

	while (*stack)
	{
		tmp = *stack;
		*stack = (*stack)->next;
		free(tmp);
	}
}

int	syntax_error(char *str)
{
	int	i;

	i = 0;
	if (!(str[0] == '+' || str[0] == '-' || (str[0] >= '0' && str[0] <= '9')))
		return (0);
	if ((str[0] == '+' || str[0] == '-') && !(str[1] >= '0' && str[1] <= '9'))
		return (0);
	while (str[++i] != '\0')
	{
		if (!(str[i] >= '0' && str[i] <= '9'))
			return (0);
	}
	return (1);
}

int	duplicate_error(t_stack *a, int n)
{
	if (a == NULL)
		return (1);
	while (a != NULL)
	{
		if (a->value == n)
			return (0);
		a = a->next;
	}
	return (1);
}

// void	free_stack(t_stack **stack)
// {
// 	t_stack	*current;
// 	t_stack	*next;

// 	if (!stack || !*stack)
// 		return ;
// 	current = *stack;
// 	while (current)
// 	{
// 		next = current->next;
// 		free(current);
// 		current = next;
// 	}
// 	*stack = NULL;
// }

void	handle_error(t_stack **a)
{
	if (a != NULL)
		free_stack(a);
	write(2, "Error\n", 6);
	exit(1);
}
