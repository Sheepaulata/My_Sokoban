/*
** EPITECH PROJECT, 2021
** directions.c
** File description:
** directions
*/

#include "my.h"

int	person_line(char **tab)
{
    int	i;
    int	j = 0;
    while (tab[j] != '\0') {
        i = 0;
        while (tab[j][i] != '\0') {
            if (tab[j][i] == 'P')
                return (j);
            i = i + 1;
        }
        j = j + 1;
    }
    return (0);
}

int	person_col(char **tab)
{
    int	i = 0;
    int	j = 0;
    while (tab[j] != '\0') {
        while (tab[j][i] != '\0') {
            if (tab[j][i] == 'P')
                return (i);
            i = i + 1;
        }
        j = j + 1;
        i = 0;
    }
    return (1);
}

int	tall_line(char *str)
{
    int	i = 0;
    while (str[i] != '\n')
        i = i + 1;
    return (i);
}

int	nb_lines(char **tab)
{
    int	i;
    while (tab[i] != '\0')
        i = i + 1;
    return (i);
}

int	direct(int ch, int value_p[2], char **str, int coin)
{
    if (ch == KEY_UP)
        up(value_p, str, coin);
    else if (ch == KEY_DOWN)
        down(value_p, str, coin);
    else if (ch == KEY_LEFT)
        left(value_p, str, coin);
    else if (ch == KEY_RIGHT)
        right(value_p, str, coin);
    return (0);
}