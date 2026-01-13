# include "push_swap.h"

void	ft_stacks(stack_node **a, char **argv)
{
	long	num;
	int		i;

	i = 0;
	while (*argv !=  NULL)
	{
		if (syntax_error(argv[i]))
			free_error(a);
		num = ft_atol(argv[i]);
		if (num > INT_MAX || num < INT_MIN)
			free_error(a);
		if (duplicate_error(*a, num))
			free_error(a);
		

	}
}