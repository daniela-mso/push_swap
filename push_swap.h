#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

//# include "libft/libft.h"
# include <stdio.h>
# include <stdlib.h>
# include <limits.h>
# include <unistd.h>


typedef struct stack_box
{
	int	data;
	int index;
	int push_cost;
	int above_median;
	int cheapest;

	struct stack_box	*next;
	struct stack_box	*prev;
	struct stack_box	*target_node;
} stack_node;


//ft_append_node.c

void	ft_append_node(stack_node **stack, int num);
stack_node *biggest_node(stack_node *stack);
stack_node	*smallest_node(stack_node *stack);
stack_node	*find_last_node(stack_node *stack);
// --------------------------------------------------------



// ft_errors.c

int	syntax_error(char *str);
int	duplicate_error(stack_node *a, int n);
void	free_stack(stack_node **stack);
void	free_error(stack_node **a) ;
void	free_aray(char **argv);
//--------------------------------------------------------------

//ft_price.c

stack_node	*get_cheapest(stack_node *stack);
void	prep_for_push(stack_node **stack, stack_node *top_node, char stack_name);
//----------------------------------------------------------------------------------


// ft_push.c

void	pa(stack_node **a, stack_node **b, int print);
void	pb(stack_node **a, stack_node **b, int print);
//---------------------------------------------------------------------------------


// ft_reverse_rotate.c

void	rra(stack_node **a, int print);
void	rrb(stack_node **b, int print);
void	rrr(stack_node **a, stack_node **b, int print);
//--------------------------------------------------------------------------------



//ft_rotate.c

void	ra(stack_node **a, int print);
void	rb(stack_node **b, int print);
void	rr(stack_node **a, stack_node **b, int print);
//----------------------------------------------------------------------------------



//ft_sort_stacks.c

void	sort_stacks(stack_node **a, stack_node **b);
//---------------------------------------------------------------------------------



//ft_sorting.c

int	is_stack_sorted(stack_node *stack);
int	stack_len(stack_node *stack);
void	sort_three(stack_node **stack);
//-------------------------------------------------------------------------------



//ft_stacks.c

void	ft_stacks(stack_node **a, char **argv);
//-----------------------------------------------------------------------------


//ft_swap.c

void	sa(stack_node **a, int print);
void	sb(stack_node **b, int print);
void	ss(stack_node **a, stack_node **b, int print);
//-----------------------------------------------------------------------------


//init_a_to_b.c

void	current_index(stack_node *stack);
void	set_cheapest(stack_node *stack);
void	init_nodes_a(stack_node *a, stack_node *b);
//--------------------------------------------------------------


//init_b_to_a.c

void	init_nodes_b(stack_node *a, stack_node *b);
//------------------------------------------------------------


//push_swap.c

int main(int argc, char **argv);
//--------------------------------------------------------------


//ft_split.c

char **ft_split(char *s, char c);
//-----------------------------------------------------------------

//ft_helper functions.c

int	ft_isdigit(int c);
int	ft_isspace(int c);
int	ft_strlen(const char *str);
void	*ft_memset(void *s, int c, size_t n_bytes);
void	*ft_calloc(size_t n_elements, size_t size);
//--------------------------------------------------------------------



//ft_atol.c

long int	ft_atol(char *str);
//--------------------------------------------------------------------









// //ft_split.c
// //char		**ft_split(const char *str, char c);
// //------------------------------------------------------

// // ft_stacks
// void		ft_stacks(stack_node **a, char **argv);
// //------------------------------------------------------

// // ft_atol.c
// //long int	ft_atol(char *str);
// //-----------------------------------------------------

// //ft_helper_functions.c
// //int			ft_isdigit(int c);
// //int			ft_isspace(int c);
// //int			ft_strlen(const char *str);
// //void		*ft_memset(void *s, int c, size_t n_bytes);
// //void		*ft_calloc(size_t n_elements, size_t size);
// //------------------------------------------------------

// // ft_errors.c
// int			syntax_error(char *str);
// int			duplicate_error(stack_node *a, int n);
// void		free_stack(stack_node **stack);
// void		free_error(stack_node **a);
// void		free_aray(char **argv);
// //-------------------------------------------------------

// //ft_append_node.c
// void		ft_append_node(stack_node **stack, int num);
// stack_node *biggest_node(stack_node *stack);
// stack_node	*smallest_node(stack_node *stack);
// stack_node	*find_last_node(stack_node *stack);
// //----------------------------------------------------------

// // ft_sorting.c
// int			is_stack_sorted(stack_node *stack);
// int			stack_len(stack_node *stack);
// void	sort_three(stack_node **stack);
// //--------------------------------------------------------

// // ft_swap.c
// void		swap(stack_node **head);
// void		sa(stack_node **a);
// void		sb(stack_node **b);
// void		ss(stack_node **a, stack_node **b);
// //------------------------------------------------------

// //push_swap.c
// int			main(int argc, char **argv);
// //------------------------------------------------------

// //ft_rotate.c
// void	rotate(stack_node **stack);
// void	ra(stack_node **a);
// void	rb(stack_node **b);
// void	rr(stack_node **a, stack_node **b);
// //------------------------------------------------------

// //ft_reverse_rotate.c
// void	reverse_rotate(stack_node **stack);
// void	rra(stack_node **a);
// void	rrb(stack_node **b);
// void	rrr(stack_node **a, stack_node **b);
// //-----------------------------------------------------

// //ft_ft-push.c
// void	push(stack_node **src, stack_node **dest);
// void	pa(stack_node **a, stack_node **b);
// void	pb(stack_node **a, stack_node **b);
// //-----------------------------------------------------



#endif 