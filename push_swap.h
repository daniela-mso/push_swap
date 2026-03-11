#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>


typedef struct s_stack
{
	int	data;
	int index;

	struct s_stack	*next;
	struct s_stack	*prev;
} t_stack;


// //ft_append_node.c

// void	ft_append_node(stack_node **stack, int num);
// stack_node *biggest_node(stack_node *stack);
// stack_node	*smallest_node(stack_node *stack);
// stack_node	*find_last_node(stack_node *stack);
// // --------------------------------------------------------



// // ft_errors.c

// int	syntax_error(char *str);
// int	duplicate_error(stack_node *a, int n);
// void	free_stack(stack_node **stack);
// void	free_error(stack_node **a) ;
// void	free_aray(char **argv);
// //--------------------------------------------------------------

// //ft_price.c

// stack_node	*get_cheapest(stack_node *stack);
// void	prep_for_push(stack_node **stack, stack_node *top_node, char stack_name);
// //----------------------------------------------------------------------------------


// // ft_push.c

// void	pa(stack_node **a, stack_node **b, int print);
// void	pb(stack_node **a, stack_node **b, int print);
// //---------------------------------------------------------------------------------


// // ft_reverse_rotate.c

// void	rra(stack_node **a, int print);
// void	rrb(stack_node **b, int print);
// void	rrr(stack_node **a, stack_node **b, int print);
// //--------------------------------------------------------------------------------



// //ft_rotate.c

// void	ra(stack_node **a, int print);
// void	rb(stack_node **b, int print);
// void	rr(stack_node **a, stack_node **b, int print);
// //----------------------------------------------------------------------------------



// //ft_sort_stacks.c

// void	sort_stacks(stack_node **a, stack_node **b);
// //---------------------------------------------------------------------------------



// //ft_sorting.c

// int	is_stack_sorted(stack_node *stack);
// int	stack_len(stack_node *stack);
// void	sort_three(stack_node **stack);
// //-------------------------------------------------------------------------------



// //ft_stacks.c

// void	ft_stacks(stack_node **a, char **argv);
// //-----------------------------------------------------------------------------


// //ft_swap.c

// void	sa(stack_node **a, int print);
// void	sb(stack_node **b, int print);
// void	ss(stack_node **a, stack_node **b, int print);
// //-----------------------------------------------------------------------------


// //init_a_to_b.c

// void	current_index(stack_node *stack);
// void	set_cheapest(stack_node *stack);
// void	init_nodes_a(stack_node *a, stack_node *b);
// //--------------------------------------------------------------


// //init_b_to_a.c

// void	init_nodes_b(stack_node *a, stack_node *b);
// //------------------------------------------------------------


// //push_swap.c

// int main(int argc, char **argv);
// //--------------------------------------------------------------


// //ft_split.c

// char **ft_split(char *s, char c);
// //-----------------------------------------------------------------

// //ft_helper functions.c

// int	ft_isdigit(int c);
// int	ft_isspace(int c);
// int	ft_strlen(const char *str);
// void	*ft_memset(void *s, int c, size_t n_bytes);
// void	*ft_calloc(size_t n_elements, size_t size);
// //--------------------------------------------------------------------



// //ft_atol.c

// long int	ft_atol(char *str);
// //--------------------------------------------------------------------









#endif 