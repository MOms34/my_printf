/*
** EPITECH PROJECT, 2021
** task04
** File description:
** my_putchar
*/

#include <unistd.h>
#include "../include/print.h"

void my_putchar(char c)
{
    write(1, &c, 1);
}
