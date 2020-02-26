/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** main
*/

#include "fonction.h"


void usage(void)
{
    write(1, "USAGE\n\t./push_swap list of integer\n", 36);
    write(1, "DESCRIPTION\n\tDisplay all operation for sort the list.\n", 55);
    write(1, "\tPush_swap two stack for sort the list.", 40);
    write(1, "\n\t-pa:\ttake the first element from l_b ", 40);
    write(1, "and move it to the first position on the l_a list", 50);
    write(1, "\n\t-pb:\ttake the first element from l_a ", 40);
    write(1, "and move it to the first position on the l_b list", 50);
    write(1, "\n\t-ra:\trotate l_a toward the beginning, ", 41);
    write(1, "the first element will become the last.", 40);
    write(1, "\n\t-ra:\trotate l_b toward the beginning, ", 41);
    write(1, "the first element will become the last.\n", 41);
}

int error(int argc, char **argv)
{
    int i = 1;
    int tmp = 0;
    if (argc == 2 && argv[1][0] == '-' && argv[1][1] == 'h' && argv[1][2] == 0) {
        usage();
        return (42);
    }
    if (argc == 1)
        return (84);
    while (i != argc) {
        while (argv[i][tmp] != 0) {
            if (argv[i][tmp] == '-')
                tmp = 1;
            if (argv[i][tmp] < '0' || argv[i][tmp] > '9')
                return (84);
            tmp = tmp + 1;
        }
        i = i + 1;
        tmp = 0;
    }
    return (0);
}

int main(int argc, char **argv)
{
    list stackA = newlist();
    list stackB = newlist();

    int error_ver = error(argc, argv);

    if (error_ver == 84) {
        write (2, "Error argument\n", 17);
        return (84);
    }
    else if (error_ver == 42)
        return (0);
    init_A(&stackA, argc, argv);
    if (!order(stackA))
        sort(stackA, stackB);
    return (0);
}