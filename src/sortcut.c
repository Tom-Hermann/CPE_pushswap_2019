/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** sortcut
*/

#include "fonction.h"

void pa(list *stackA, list *stackB)
{
    my_putstr("pa ");
    move(stackB, stackA);
}

void pb(list *stackA, list *stackB)
{
    my_putstr("pb ");
    move(stackA, stackB);
}

void ra(list *stack)
{
    my_putstr("ra ");
    (*stack) = rotate((*stack));
}

void rb(list *stack)
{
    my_putstr("rb ");
    (*stack) = rotate((*stack));
}

void sa(list *stack)
{
    my_putstr("sa ");
    (*stack) = swap((*stack));
}

void sb(list *stack)
{
    my_putstr("sb ");
    (*stack) = swap((*stack));
}

void num_normal(list *stackA, list *stackB)
{
    while ((*stackA)->num < (*stackB)->num) {
        rb(&(*stackB));
    }
    pb(&(*stackA), &(*stackB));
}