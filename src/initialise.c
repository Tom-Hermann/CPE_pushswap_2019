/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** initialise
*/

#include "fonction.h"

void init_A(list *stackA, int size, char **argv)
{
    int i = 1;

    while (i != size) {
        (*stackA) = put_end((*stackA), my_getnbr(argv[i]));
        i = i + 1;
    }
}

