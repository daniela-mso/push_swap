# include "push_swap.h"

static void	swap(stack_node **head)
{
	stack_node	*tmp;

	if (*head == NULL || (*head)->next == NULL)
		return ;
	tmp = (*head)->next;
	(*head)->next = tmp->next;
	tmp->next = *head;
	*head = tmp;
}
// void	swap(stack_node **head) // need a function that swaps the first and second node of a stack
// {
// 	if (*head == NULL || (*head)->next == NULL) //check if the stack is empty or if it only has one node
// 		return; //nothing to swap

// 	stack_node *first;
// 	stack_node *second;

// 	first = *head; // first is now wqual to the head
// 	second = (*head)->next; // second is now equal to the second node 

// 	first->next = second->next; // the pointer inside first now holds the adress to the second->next  (if there are only 2 nodes then is NULL if not then it would be the third node)
// 	second->next = first; // the pointer second->next now points to first 
// 	*head = second; // second now holds the position of the head

// 	if (first->next != NULL) // if the pointer "next" of the second node isnt null then we need to link the third node with its new previous node , if the third were to be NULL then we dont link it to avoid undefined behavior
// 		first->next->prev = first; // so  first (the new second node) first->next (the third node)  first->next->prev (the prev node to the third node)  = first  (is pointing to the "first" node)
// 	first->prev = *head; // the "first"(second node) ->prev is pointing to the head/second
// 	(*head)->prev = NULL; // the prev to the head is NULL since there are no nodes before the head
// }

void	sa(stack_node **a, int print)
{
	//printf("executing sa\n");
	swap(a);
	if (print == 0)
		write(1, "sa\n", 3);
	//printf("saa");
}

void	sb(stack_node **b, int print)
{
	swap(b);
	if (print == 0)
		write(1, "sb\n", 3);
}

void	ss(stack_node **a, stack_node **b, int print) //swap a and b at the same time 
{
	swap(a);
	swap(b);
	if (print == 0)
		write(1, "ss\n", 3);
}
