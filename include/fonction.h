/*
** EPITECH PROJECT, 2019
** CPE_pushswap_2019
** File description:
** fonction
*/

#ifndef FONCTION_H_
#define FONCTION_H_

#include "struct.h"

//list_fonction
list newlist(void);
int empty_list(list stack);
int size_list(list stack);
void printf_list(list stack);

//fonction_pool
void my_putchar(char c);
int my_strlen(char const *str);
char *my_strdup(char const *src);
int my_put_nbr(int nb);
int my_putstr(char const *str);
int my_getnbr(char const *str);

//fonction_list
list put_end(list stack, int x);
list put_first(list stack, int x);
list suppr_last(list stack);
list suppr_first(list stack);

//fonction_algo
list swap(list stack);
list move(list *stack1, list *stack2);
list rotate(list stack);
int order(list stack);

//init
void init_A(list *stackA, int size, char **argv);
void init_B(list *stackB, int size);

//short cute
void pa(list *stackA, list *stackB);
void pb(list *stackA, list *stackB);
void ra(list *stack);
void rb(list *stack);
void sa(list *stack);
void sb(list *stack);

//short
void sort(list stackA, list stackB);
void prepare_swap(list *stackA, list *stackB);
void finish(list *stackA, list *stackB, int min);
int num_sup_max(list *stackA, list *stackB, int max);
int num_inf_min(list *stackA, list *stackB, int max);
void num_normal(list *stackA, list *stackB);



#endif /* !FONCTION_H_ */
