/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 23:29:37 by danielad          #+#    #+#             */
/*   Updated: 2026/03/14 23:32:12 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	push(t_stack **src, t_stack **dest)
{
	t_stack	*node_to_move;

	if (*src == NULL)
		return ;
	node_to_move = *src;
	*src = (*src)->next;
	if (*src != NULL)
		(*src)->prev = NULL;
	node_to_move->next = *dest;
	node_to_move->prev = NULL;
	if (*dest != NULL)
		(*dest)->prev = node_to_move;
	*dest = node_to_move;
}

void	pa(t_stack **a, t_stack **b)
{
	if (*b == NULL)
		return ;
	push(b, a);
	write(1, "pa\n", 3);
}

void	pb(t_stack **a, t_stack **b)
{
	if (*a == NULL)
		return ;
	push(a, b);
	write(1, "pb\n", 3);
}
