/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** usefulfonction
*/

#include "fonction.h"

list newlist(void)
{
    return (NULL);
}

int empty_list(list stack)
{
    if (stack == NULL)
        return (1);
    return (0);
}

int size_list(list stack)
{
    int size = 0;

    if (empty_list(stack) == 0) {
        while (stack != NULL) {
            size = size + 1;
            stack = stack->next;
        }
    }
    return (size);
}

void printf_list(list stack)
{
    if (empty_list(stack))
        my_putstr("List empty");
    while (empty_list(stack) == 0) {
        my_put_nbr(stack->num);
        my_putchar(' ');
        stack = stack->next;
    }
}