/*
** EPITECH PROJECT, 2021
** my.h
** File description:
** my
*/

#ifndef MY_H_
#define MY_H_

#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>
#include <ncurses.h>
#include <unistd.h>

void my_putchar(char c);
int my_putstr(char const *str);
int my_strlen(char *str);
int up(int p[2], char **str, int coin);
int down(int p[2], char **str, int coin);
int left(int p[2], char **str, int coin);
int right(int p[2], char **str, int coin);
int up_suit(int p[2], char **str);
int down_suit(int p[2], char **str);
int left_suit(int p[2], char **str);
int right_suit(int p[2], char **str);
int my_sokoban(char *tab, int value_p[2], int line);
int sokoban_loop(char **str, int i, int add, int n);
int alloc(int ac, char **av);
int dump_map(int ac, char **av, char *str);
int check_lose(char **tab);
int check_victory(char *str, char **tab);
int person_line(char **tab);
int person_col(char **tab);
int tall_line(char *str);
int direct(int ch, int value_p[2], char **str, int coin);
char **str_wordtab(char *str, char **tab);
int nb_lines(char **tab);
void map();
int	check_map(char *str);
char **check_coin(char *str, char **tab);

#endif /* !MY_H_ */
