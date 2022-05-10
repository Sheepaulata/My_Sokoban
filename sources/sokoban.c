/*
** EPITECH PROJECT, 2021
** sokoban.c
** File description:
** sokoban
*/

#include "my.h"

int my_sokoban(char *tab, int value_p[2], int line)
{
    initscr();
    keypad(stdscr, TRUE);
    char **str = str_wordtab(tab, str);
    int arr[5];
    arr[1] = tall_line(str[0]);
    arr[0] = 2;
    while (1) {
        arr[3] = 0;
        arr[4] = line / 2;
        value_p[0] = person_line(str);
        value_p[1] = person_col(str);
        str = check_coin(tab, str);
        if (check_victory(tab, str) == 1)
            return (0);
        sokoban_loop(str, arr[3], arr[4], arr[1]);
        arr[2] = getch();
        if (arr[2] == 32)
            str = str_wordtab(tab, str);
        direct(arr[2], value_p, str, arr[0]);
        map();
    }
}

int	sokoban_loop(char **str, int i, int add, int n)
{
    while (str[i] != '\0') {
        mvprintw((LINES/2) - add, (COLS/2) - (n/2), str[i]);
        i = i + 1;
        add = add - 1;
    }
    return (0);
}