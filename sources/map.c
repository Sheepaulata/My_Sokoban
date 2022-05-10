/*
** EPITECH PROJECT, 2021
** map.c
** File description:
** map
*/

#include "my.h"

int	check_map(char *str)
{
    int	i;
    int	P = 0;
    int	coin = 0;
    int	caisse = 0;
    while (str[i] != '\0') {
        if (str[i] == 'P')
            P = P + 1;
        if (str[i] == 'O')
            coin = coin + 1;
        if (str[i] == 'X')
            caisse = caisse + 1;
        i = i + 1;
    }
    if (P != 1 || coin != caisse)
        return (84);
    else
        return (0);
}

int	dump_map(int ac, char **av, char *str)
{
    int	size = 1;
    char buffer[1];
    int	count = 0;
    int	line = 0;
    int fd = open(av[ac - 1], O_RDONLY);
    if (fd == -1)
        return (84);
    while (size != 0) {
        size = read(fd, buffer, 1);
        if (buffer[0] == '\n')
            line = line + 1;
        str[count] = buffer[0];
        count = count + 1;
    }
    close(fd);
    return (line);
}

void map(void)
{
    clear();
    refresh();
}