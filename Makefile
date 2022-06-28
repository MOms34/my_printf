##
## EPITECH PROJECT, 2021
## InfinAdd
## File description:
## Makefile
##

NAME    = libmy.a

CC    = gcc

RM    = rm -f

SRC	=	$(wildcard src/*.c) \

OBJS    = $(SRC:.c=.o)

CFLAGS = -I ./include/ -L./ -lmy

CFLAGS += -W -Wall -Wextra

all: $(NAME)

$(NAME): $(OBJS)
	$(CC) $(SRC) -c
	ar rc $(NAME) $(OBJS)

clean:
	$(RM) $(OBJS)
	rm -rf *.o

fclean: clean
	$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
