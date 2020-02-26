/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** push_swap_fonction
*/

#include "fonction.h"

list swap(list stack)
{
    int nb1 = 0;
    int nb2 = 0;

    nb1 = stack->num;
    stack = suppr_first(stack);
    nb2 = stack->num;
    stack = suppr_first(stack);
    stack = put_first(stack, nb1);
    stack = put_first(stack, nb2);
    return (stack);
}

list move(list *stack1, list *stack2)
{
    int nb = (*stack1)->num;

    (*stack1) = suppr_first((*stack1));
    (*stack2) = put_first((*stack2), nb);
    return ((*stack1));
}

list rotate(list stack)
{
    int nb = stack->num;

    stack = suppr_first(stack);
    stack = put_end(stack, nb);
    return (stack);
}

int order(list stack)
{
    while (!empty_list(stack->next)) {
        if (stack->num > stack->next->num)
            return (0);
        stack = stack->next;
    }
    return (1);
}