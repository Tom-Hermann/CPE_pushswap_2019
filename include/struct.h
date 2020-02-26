/*
** EPITECH PROJECT, 2019
** header of file system
** File description:
** header file
*/

#ifndef FILE_SYS_H_
#define FILE_SYS_H_

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct s_list
{
    int num;
    struct s_list *next;
}list_t, *list;

#endif /* !FILE_SYS_H_ */