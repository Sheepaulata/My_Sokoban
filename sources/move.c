/*
** EPITECH PROJECT, 2021
** move.c
** File description:
** move
*/

#include "my.h"

int	down_suit(int p[2], char **str)
{
    if (str[p[0] + 1][p[1]] == 'X' && str[p[0] + 2][p[1]] != '#') {
        if (str[p[0] + 2][p[1]] != 'X') {
            str[p[0]][p[1]] = 32;
            str[p[0] + 1][p[1]] = 'P';
            str[p[0] + 2][p[1]] = 'X';
        }
    }
    else if (str[p[0] + 1][p[1]] == 'O') {
        str[p[0]][p[1]] = 32;
        str[p[0] + 1][p[1]] = 'P';
        return (1);
    }
    else if (str[p[0] + 1][p[1]] != '#' && str[p[0] + 1][p[1]] != 'X') {
        str[p[0]][p[1]] = 32;
        str[p[0] + 1][p[1]] = 'P';
    }
    return (0);
}

int	right_suit(int p[2], char **str)
{
    if (str[p[0]][p[1] + 1] == 'X' && str[p[0]][p[1] + 2] != '#') {
        if (str[p[0]][p[1] + 2] != 'X') {
            str[p[0]][p[1]] = 32;
            str[p[0]][p[1] + 1] = 'P';
            str[p[0]][p[1] + 2] = 'X';
        }
    }
    else if (str[p[0]][p[1] + 1] == 'O') {
        str[p[0]][p[1]] = 32;
        str[p[0]][p[1] + 1] = 'P';
        return (1);
    }
    else if (str[p[0]][p[1] + 1] != '#' && str[p[0]][p[1] + 1] != 'X') {
        str[p[0]][p[1]] = 32;
        str[p[0]][p[1] + 1] = 'P';
    }
    return (0);
}

int	up_suit(int p[2], char **str)
{
    if (str[p[0] - 1][p[1]] == 'X' && str[p[0] - 2][p[1]] != '#') {
        if (str[p[0] - 2][p[1]] != 'X') {
        str[p[0]][p[1]] = 32;
        str[p[0] - 1][p[1]] = 'P';
        str[p[0] - 2][p[1]] = 'X';
        }
    }
    else if (str[p[0] - 1][p[1]] == 'O') {
        str[p[0]][p[1]] = 32;
        str[p[0] - 1][p[1]] = 'P';
        return (1);
    }
    else if (str[p[0] - 1][p[1]] != '#' && str[p[0] - 1][p[1]] != 'X') {
        str[p[0]][p[1]] = 32;
        str[p[0] - 1][p[1]] = 'P';
    }
    return (0);
}

int	left_suit(int p[2], char **str)
{
    if (str[p[0]][p[1] - 1] == 'X' && str[p[0]][p[1] - 2] != '#') {
        if (str[p[0]][p[1] - 2] != 'X') {
            str[p[0]][p[1]] = 32;
            str[p[0]][p[1] - 1] = 'P';
            str[p[0]][p[1] - 2] = 'X';
        }
    }
    else if (str[p[0]][p[1] - 1] == 'O') {
        str[p[0]][p[1]] = 32;
        str[p[0]][p[1] - 1] = 'P';
        return (1);
    }
    else if (str[p[0]][p[1] - 1] != '#' && str[p[0]][p[1] - 1] != 'X') {
        str[p[0]][p[1]] = 32;
        str[p[0]][p[1] - 1] = 'P';
    }
    return (0);
}