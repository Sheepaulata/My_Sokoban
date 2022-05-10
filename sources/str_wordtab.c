/*
** EPITECH PROJECT, 2021
** str_wordtab.c
** File description:
** str_wordtab
*/

#include "my.h"

char **str_wordtab(char *str, char **tab)
{
    int	arr[2];
    arr[0] = 0;
    arr[1] = 0;
    int size = tall_line(str);
    tab = malloc(sizeof(char **) * my_strlen(str));
    int val = 0;
    while (str[arr[0]] != '\0') {
        tab[arr[1]] = malloc(sizeof(char *) * size + 1);
        while (str[arr[0]] != '\n') {
            tab[arr[1]][val] = str[arr[0]];
            val = val + 1;
            arr[0] = arr[0] + 1;
        }
        tab[arr[1]][val] = '\n';
        tab[arr[1]][val + 1] = '\0';
        arr[0] = arr[0] + 1;
        arr[1] = arr[1] + 1;
        val = 0;
    }
    return (tab);
}
