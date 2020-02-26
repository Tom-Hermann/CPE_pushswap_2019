/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** fonction_list
*/

#include "fonction.h"

list put_end(list stack, int x)
{
    list element = malloc(sizeof(element));
    list tmp = stack;

    element->num = x;
    element->next = NULL;
    if (empty_list(stack))
        return (element);
    while (tmp->next != NULL)
        tmp = tmp->next;
    tmp->next = element;
    return (stack);
}

list put_first(list stack, int x)
{
    list tmp = malloc(sizeof(tmp));

    tmp->num = x;
    if (empty_list(stack))
        tmp->next = NULL;
    else
        tmp->next = stack;
    return (tmp);
}

list suppr_last(list stack)
{
    list tmp = stack;
    list save = stack;

    if (empty_list(stack))
        return (stack);
    if (stack->next == NULL) {
        free(stack);
        return (NULL);
    }
    while (tmp->next != NULL) {
        save = tmp;
        tmp = tmp->next;
    }
    save->next = NULL;
    free(tmp);
    return (stack);
}

list suppr_first(list stack)
{
    list tmp = malloc(sizeof(stack));

    if (empty_list(stack))
        return (tmp);
    tmp = stack->next;
    free(stack);
    return (tmp);
}

list clear(list stack)
{
    if (empty_list(stack))
        return (NULL);
    while (stack != NULL)
        stack = suppr_first(stack);
    return (stack);
}