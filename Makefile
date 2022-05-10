##
## EPITECH PROJECT, 2021
## Makefile
## File description:
## Makefile
##

SRC 	=	sources/main.c \
			sources/my_put.c \
			sources/my_strlen.c \
			sources/str_wordtab.c \
			sources/directions.c \
			sources/map.c \
			sources/move.c \
			sources/key.c \
			sources/result.c \
			sources/sokoban.c

CFLAGS	=	-Wall -Wshadow -Wextra -I include -lncurses

OBJ		= 	$(SRC:.c=.o)

NAME 	= 	my_sokoban

all:		$(NAME)

$(NAME): 	$(OBJ)
		gcc -o $(NAME) $(OBJ) $(CFLAGS)

clean:
			rm -f $(OBJ)

fclean:		clean
			rm -f $(NAME)

re: 		fclean all