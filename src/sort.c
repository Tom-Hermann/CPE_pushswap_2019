/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** sort
*/

#include "fonction.h"

void sort(list stackA, list stackB)
{
    prepare_swap(&stackA, &stackB);
    while (!order(stackA)) {
        prepare_swap(&stackA, &stackB);
        while (!empty_list(stackA->next)) {
            prepare_swap(&stackA, &stackB);
            if (stackB->num < stackB->next->num)
                sb(&stackB);
        }
        pb(&stackA, &stackB);
        rb(&stackB);
        while (!empty_list(stackB->next)) {
            prepare_swap(&stackB, &stackA);
        }
        move(&stackB, &stackA);
        if (order(stackA)) {
            my_putstr("pa\n");
            break;
        }
        else
            my_putstr("pa ");
    }
}

void prepare_swap(list *stackA, list *stackB)
{
    if ((*stackA)->num < (*stackA)->next->num)
        sa(stackA);
    pb(&(*stackA), &(*stackB));
}

