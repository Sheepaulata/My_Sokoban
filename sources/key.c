/*
** EPITECH PROJECT, 2021
** key.c
** File description:
** key
*/

#include "my.h"

int right(int p[2], char **str, int coin)
{
    if (str[p[0]][p[1] + 1] == '#')
        return (coin);
    coin = right_suit(p, str);
    return (0);
}

int down(int p[2], char **str, int coin)
{
    if (str[p[0] + 1][p[1]] == '#')
        return (coin);
    coin = down_suit(p, str);
    return (0);
}

int up(int p[2], char **str, int coin)
{
    if (str[p[0] - 1][p[1]] == '#')
        return (coin);
    coin = up_suit(p, str);
    return (0);
}

int left(int p[2], char **str, int coin)
{
    if (str[p[0]][p[1] - 1] == '#')
        return (coin);
    coin = left_suit(p, str);
    return (0);
}