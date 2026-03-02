# include "push_swap.h"

void	ft_stacks(stack_node **a, char **argv)
{
	//printf("staksssss");
	long	num;
	int		i;

	i = 0;
	while (argv[i] !=  NULL)
	{

		if (syntax_error(argv[i]))
			free_error(a);
		num = ft_atol(argv[i]);
		printf("%ld ", num);

		if (num > INT_MAX || num < INT_MIN)
			free_error(a);
		if (duplicate_error(*a, (int)num))
			free_error(a);
		ft_append_node(a , (int)num);
		i++;
	}

}