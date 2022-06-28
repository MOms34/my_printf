/*
** EPITECH PROJECT, 2021
** task02
** File description:
** my_putstr
*/

#include "../include/print.h"

int my_putstr(char const *str)
{
    int i = 0;

    while (str[i] != '\0') {
        my_putchar(str[i]);
        i++;
    }
    return (0);
}