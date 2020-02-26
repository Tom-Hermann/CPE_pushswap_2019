##
## EPITECH PROJECT, 2019
## Makefile
## File description:
## make
##

SRC				=	src/useful_fonction.c\
					src/my_putstr.c\
					src/my_putchar.c\
					src/my_put_nbr.c\
					src/my_getnbr.c\
					src/fonction_list.c\
					src/push_swap_fonction.c\
					src/initialise.c\
					src/sortcut.c\
					src/sort.c

SRC_M			=	src/main.c

SRC_UT			=	tests/*.c

OBJ				=	$(SRC:.c=.o)

OBJ_M			=	$(SRC_M:.c=.o)

INCLUDE			=	-I./include

NAME			=	push_swap

NAME_UT			=	unit_test

CFLAGS			=	-W -Werror -Wall -Wextra -g -I./include

CFLAGS_UT		=	-lcriterion --coverage

RM				=	rm -rf


all:		$(NAME)

$(NAME):	$(OBJ_M) $(OBJ)
		gcc -o $(NAME) $(OBJ) $(OBJ_M) $(INCLUDE) $(CFLAGS) $(LFLAGS)

tests_run:
		gcc -o $(NAME_UT) $(SRC) $(SRC_UT) $(INCLUDE) $(CFLAGS_UT) $(LFLAGS)
		./$(NAME_UT)

clean:
		$(RM) $(OBJ) $(OBJ_UT) $(OBJ_M)

fclean:		clean
		$(RM) $(NAME)
		$(RM) $(NAME_UT)
		$(RM) *.gcda *.gcno

re:		fclean all
