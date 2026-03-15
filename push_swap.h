/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 23:35:22 by danielad          #+#    #+#             */
/*   Updated: 2026/03/15 13:41:38 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>

typedef struct s_stack
{
	int				value;
	int				index;

	struct s_stack	*next;
	struct s_stack	*prev;
}					t_stack;

char		**ft_split(char *s, char c);
long int	ft_atol(char *str);

// push.c
void		push(t_stack **src, t_stack **dest);
void		pa(t_stack **a, t_stack **b);
void		pb(t_stack **a, t_stack **b);

//rotate.c
void		rotate(t_stack **stack);
void		ra(t_stack **a);
void		rb(t_stack **b);
void		rr(t_stack **a, t_stack **b);

// swap.c
void		swap(t_stack **head);
void		sa(t_stack **a);
void		sb(t_stack **b);
void		ss(t_stack **a, t_stack **b);

// rev_rotate.c
void		reverse_rotate(t_stack **stack);
void		rra(t_stack **a);
void		rrb(t_stack **b);
void		rrr(t_stack **a, t_stack **b);

// sort.c
int			is_sorted(t_stack *stack);
void		sort_three(t_stack **stack);
void		sort_five(t_stack **a, t_stack **b);
void		radix_sort(t_stack **a, t_stack **b);
void		sort(t_stack **a, t_stack **b);

// errors.c
void		free_stack(t_stack **stack);
int			syntax_error(char *str);
int			duplicate_error(t_stack *a, int n);
void		handle_error(t_stack **a);

//nodes.c
t_stack		*find_last_node(t_stack *stack);
void		add_back(t_stack **stack, int val);
int			stack_len(t_stack *stack);
t_stack		*biggest_node(t_stack *stack);
t_stack		*smallest_node(t_stack *stack);

//push_swap.c
void		process_node(t_stack **a, char *str);
void		parse_and_fill(int argc, char **argv, t_stack **a);
int			get_position(t_stack *stack, t_stack *target);
void		assign_index(t_stack *stack);

#endif 