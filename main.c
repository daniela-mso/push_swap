# include "push_swap.h"

int main(int argc, char **argv)
{
	n_stack_box	*a;
	n_stack_box	*b;

	a = NULL;
	b = NULL;
	if (argc == 1 || argv[1][0] == '\0')
		return (1);
//e se houver maid=s do que 2 argumentos de tipo str 
	else if (argc == 2 )
		argv = ft_split(argv[1], ' ');
	return (0);
}