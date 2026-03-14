/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   errors.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 23:49:40 by danielad          #+#    #+#             */
/*   Updated: 2026/03/14 23:53:26 by danielad         ###   ########.fr       */
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

void	process_node(t_stack **a, char *str)
{
	long	n;

	if (str[0] == '\0')
		return ;
	if (syntax_error(str) == 0)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	n = ft_atol(str);
	if (n > 2147483647 || n < -2147483648)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	if (duplicate_error(*a, (int)n) == 0)
	{
		write(2, "Error\n", 6);
		exit(1);
	}
	add_back(a, (int)n);
}
