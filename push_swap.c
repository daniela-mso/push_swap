# include "push_swap.h"

int main(int argc, char **argv)
{
	stack_node	*a;
	//stack_node	*b;

	a = NULL;
	//b = NULL;
	if (argc == 1 || argv[1][0] == '\0')
		return (1);
	else if (argc == 2 )
		argv = ft_split(argv[1], ' ');
	ft_stacks(&a, argv + 1);
	
	return (0);
}