#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <limits.h>
# include "push_swap.h"














////////////////////////////////////////////////////////////////////////////////////











void print_stack(t_stack *a) {
    while (a) {
        printf("%d -> ", a->value);
        a = a->next;
    }
    printf("NULL\n");
}




#include <limits.h>











// void parse_and_fill(int argc, char **argv, t_stack **a)
// {
//     int i;
//     long int n;

//     i = 1;
//     while (i < argc)
//     {
//         if (!syntax_error(argv[i]))
//         {
//             write(2, "Error\n", 6);
//             exit(1);
//         }
//         n = ft_atol(argv[i]);
//         if (n > INT_MAX || n < INT_MIN || !duplicate_error(*a, (int)n))
//         {
//             write(2, "Error\n", 6);
//             exit(1);
//         }
//         add_back(a, (int)n);
//         i++;
//     }
// }







/////////////////////////////////////





// void sort_five(t_stack **a, t_stack **b)
// {
//     int i;
//     int len;

//     len = stack_len(*a);
//     i = 0;
//     while (i < len - 3)
//     {
//         while ((*a)->index != i && (*a)->index != i + 1)
//             ra(a);
//         pb(a, b);
//         i++;
//     }
//     sort_three(a);
//     while (stack_len(*b) > 0)
//         pa(a, b);
//     if ((*a)->index > (*a)->next->index)
//         sa(a);
// }


















void dump_stacks(t_stack *a, t_stack *b)
{
    printf("--- FINAL STATE ---\nStack A: ");
    while (a) { printf("%d ", a->value); a = a->next; }
    printf("\nStack B: ");
    while (b) { printf("%d ", b->value); b = b->next; }
    printf("\n-------------------\n");
}



