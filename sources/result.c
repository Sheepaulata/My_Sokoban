/*
** EPITECH PROJECT, 2021
** lose.c
** File description:
** lose
*/

#include "my.h"

int	count_x(char **tab)
{
    int	i;
    int	j = 0;
    int	count = 0;
    while (tab[j] != '\0') {
        i = 0;
        while (tab[j][i] != '\0') {
            if (tab[j][i] == 'X')
                count = count + 1;
            i = i + 1;
        }
    j = j + 1;
    }
    return (count);
}

int	check_lose(char **tab)
{
    int	a[2];
    int	compt = 0;
    a[0] = 0;
    while (tab[a[0]] != '\0') {
        a[1] = 0;
        while (tab[a[0]][a[1]] != '\0') {
            if (tab[a[0]][a[1]] == 'X') {
            if (tab[a[0]][a[1] - 1] == '#' || tab[a[0]][a[1] + 1] == '#')
                if (tab[a[0] + 1][a[1]] == '#' || tab[a[0] - 1][a[1]] == '#')
                    ++compt;
            if (tab[a[0] + 1][a[1]] == '#' || tab[a[0] - 1][a[1]] == '#')
                if (tab[a[0]][a[1] + 1] == '#' || tab[a[0]][a[1] - 1] == '#')
                    ++compt;
            }
        a[1] = a[1] + 1;
        }
    a[0] = a[0] + 1;
    }
    if (compt == count_x(tab))
        return (1);
    return (0);
}

char **check_coin(char *str, char **tab)
{
    char **comp;
    int	a[2];

    comp = str_wordtab(str, comp);
    a[0] = 0;
    while (comp[a[0]] != '\0') {
        a[1] = 0;
        while (comp[a[0]][a[1]] != '\0') {
            if (comp[a[0]][a[1]] == 'O' && tab[a[0]][a[1]] == 32)
                tab[a[0]][a[1]] = 'O';
            a[1] = a[1] + 1;
        }
        a[0] = a[0] + 1;
    }
    return (tab);
}

int	check_victory(char *str, char **tab)
{
    char	**comp;
    int	a[2];

    comp = str_wordtab(str, comp);
    a[0] = 0;
    while (comp[a[0]] != '\0') {
        a[1] = 0;
        while (comp[a[0]][a[1]] != '\0') {
            if (comp[a[0]][a[1]] == 'O' && tab[a[0]][a[1]] != 'X')
                return (0);
            a[1] = a[1] + 1;
        }
        a[0] = a[0] + 1;
    }
    return (1);
}