#include "push_swap.h"

int	syntax_error(char *str)
{
	int	i;

	i = 0;
	if (!(str[0] == '+' || str[0] == '-'
			|| ft_isdigit(str[0]) )) // if the first char is not a sign or digit  return error
		return (1);
	if ((str[0] == '+' || str[0] == '-')
			&& !(ft_isdigit(str[1]))) // if there is a sign but the second char isnt a digit return error
		return (1);
	while (str[++i] != '\0') // check if all the char in the stirng after the sign, if there is one, are numbers (thats why i start with ++i ) even if there is no sign we alreafy know the previous must have been a digit
	{
		if (!(ft_isdigit(str[i])))
			return (1);
	}
	return (0);
}

int	duplicate_error(stack_node *a, int n) //check for duplicates in stack a 
{
	if (a == NULL) // if the stack is empty (no nodes or no valid nodes) then there is no duplicate, we can exit with no error 
		return 0;
	while (a != NULL) // we check if the number we are trying to add is equal to the number in the current node, then move to the next node in the stack to check the same of the next  till we either find an equal and exit with an error  or we find NULL and exit with no errror
	{
		if (a->data == n)
			return (1); 
		a = a->next;
	}
	return (0);
}

void	free_stack(stack_node **stack)
{
	stack_node	*temp; //need a temporary pointer to strore the next node in the stavck before freeing the curent one, since once the node is freed i wont have access to its next pointer
	stack_node	*current_node;

	if (stack == NULL)
		return ;
	current_node = *stack;
	while (current_node != NULL)
	{
		temp = current_node->next;
		free(current_node);
		current_node = temp;
	}
	*stack = NULL;
	
}

void	free_error(stack_node **a) 
{
	free_stack(a);
	perror("Error\n");
	exit(1);
}
