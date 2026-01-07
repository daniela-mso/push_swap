#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <limits.h>


typedef struct stack_box
{
	int	num;
	int index;

	struct stack_box	*next;
	struct stack_box	*prev;
	struct stack_box	*target;
} n_stack_box;

char	**ft_split(const char *str, char c);
void	ft_stacks(n_stack_box **a, char **argv);
long int	ft_atol(char *str);

#endif 