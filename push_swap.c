# include "push_swap.h"

int main(int argc, char **argv)
{
	stack_node	*a;
	stack_node	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || (argc == 2 && argv[1][0] == '\0'))
		return (1);
	else if (argc == 2 )
		argv = ft_split(argv[1], ' '); // this will dynamically allocate memory for the array of strings that split returns ill need to free it later
	ft_stacks(&a, argv + 1);
	if (is_stack_sorted(a) == 0)
	{
		//printf("\n entered if to sort");
		if (stack_len(a) == 2)
			write(1, "ppppppp\n", 8);
			//sa(&a, 0);
		else if (stack_len(a) == 3)
			sort_three(&a);
		else
			sort_stacks(&a, &b);

	}
	if (argc == 2)
		free_aray(argv); // need to free the array returned by split 
	free_stack(&a); // free the nodes 
	return (0);
}
