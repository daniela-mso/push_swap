/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danielad <danielad@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/14 23:36:11 by danielad          #+#    #+#             */
/*   Updated: 2026/03/14 23:42:01 by danielad         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	parse_and_fill(int argc, char **argv, t_stack **a)
{
	int		i;
	int		j;
	char	*str;

	i = 1;
	while (i < argc)
	{
		j = 0;
		str = argv[i];
		while (str[j])
		{
			while (str[j] == ' ')
				j++;
			if (!str[j])
				break ;
			process_node(a, &str[j]);
			while (str[j] && str[j] != ' ')
				j++;
		}
		i++;
	}
}

// void parse_and_fill(int argc, char **argv, t_stack **a)
// {
//     int i;
//     int j;
//     int k;
//     char temp[20];

//     i = 1;
//     while (i < argc)
//     {
//         j = 0;
//         while (argv[i][j])
//         {
//             while (argv[i][j] == ' ')
//                 j++;
//             if (!argv[i][j])
//                 break;
//             k = 0;
//             while (argv[i][j] && argv[i][j] != ' ')
//             {
//                 if (k < 19)
//                     temp[k++] = argv[i][j];
//                 j++;
//             }
//             temp[k] = '\0';
//             process_node(a, temp);
//         }
//         i++;
//     }
// }

int	get_position(t_stack *stack, t_stack *target)
{
	int	pos;

	pos = 0;
	while (stack && stack != target)
	{
		pos++;
		stack = stack->next;
	}
	return (pos);
}

void	assign_index(t_stack *stack)
{
	t_stack	*current;
	t_stack	*compare;
	int		rank;

	current = stack;
	while (current)
	{
		rank = 0;
		compare = stack;
		while (compare)
		{
			if (current->value > compare->value)
				rank++;
			compare = compare->next;
		}
		current->index = rank;
		current = current->next;
	}
}

int	main(int argc, char **argv)
{
	t_stack	*a;
	t_stack	*b;
	int		len;

	a = NULL;
	b = NULL;
	parse_and_fill(argc, argv, &a);
	assign_index(a);
	if (is_sorted(a))
		return (0);
	len = stack_len(a);
	if (len == 2)
		sa(&a);
	else if (len == 3)
		sort_three(&a);
	else if (len <= 5)
		sort_five(&a, &b);
	else
		radix_sort(&a, &b);
	free_stack(&a);
	free_stack(&b);
	return (0);
}
