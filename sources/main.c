/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** main
*/

#include "my.h"

int	alloc(int ac, char **av)
{
    int	size = 1;
    char buffer[1];
    int	count = 0;
    int fd = open(av[ac - 1], O_RDONLY);
    if (fd == -1)
        return (84);
    while (size != 0) {
        size = read(fd, buffer, 1);
        count = count + 1;
    }
    close(fd);
    return (count);
}

void help(void)
{
    my_putstr("USAGE\n");
    my_putstr("\t   ./my_sokoban map\n\n");
    my_putstr("DESCRIPTION\n");
    my_putstr("\t   map\tfile representing the warehouse map, containing '#' ");
    my_putstr("for walls, \n\t\t'P' for the player, ");
    my_putstr("X' for boxes and 'O' for storage locations.\n");
}

char *back(char *str, int count)
{
    if (str[count - 1] != '\n')
        str[count - 1] = '\n';
    return (str);
}

int	main(int ac, char **av)
{
    if (ac != 2)
        return (84);
    if (av[1][0] == '-' && av[1][1] == 'h') {
        help();
        return (0);
    }
    int	value_p[2];
    int	count = alloc(ac, av);
    if (count == 84)
        return (84);
    char *str = malloc(sizeof(char *) * count + 1);
    int line = dump_map(ac, av, str);
    str = back(str, count);
    if (check_map(str) == 84)
        return (84);
    int ret = my_sokoban(str, value_p, line);
    endwin();
    return (ret);
}