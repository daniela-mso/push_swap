#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdlib.h>
# include <limits.h>


typedef struct stack_box
{
	int	data;
	int index;

	struct stack_box	*next;
	struct stack_box	*prev;
	struct stack_box	*target;
} stack_node;

char		**ft_split(const char *str, char c);
void		ft_stacks(stack_node **a, char **argv);
long int	ft_atol(char *str);
int			ft_isdigit(int c);
int			ft_isspace(int c);
int			ft_strlen(const char *str);
void		*ft_memset(void *s, int c, size_t n_bytes);
void		*ft_calloc(size_t n_elements, size_t size);
int			syntax_error(char *str);
int			duplicate_error(stack_node *a, int n);
void		free_stack(stack_node **stack);
void		free_error(stack_node **a);

int			main(int argc, char **argv);

#endif 