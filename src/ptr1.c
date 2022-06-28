/*
** EPITECH PROJECT, 2021
** print
** File description:
** printf
*/

#include <stdarg.h>
#include <stdio.h>
#include "../include/print.h"

int ptrs(va_list ap)
{
    char *str;
    str = va_arg(ap, char *);
    my_putstr(str);
    return (0);
}
int ptri(va_list ap)
{
    int nb;
    nb = va_arg(ap, int);
    my_put_nbr(nb);
    return(0);
}
int ptrd(va_list ap)
{
    int nb;
    nb = va_arg(ap, int);
    my_put_nbr(nb);
    return(0);
}
int ptrc(va_list ap)
{
    int c;
    c = va_arg(ap, int);
    my_putchar(c);
    return (0);
}
int ptru(va_list ap)
{
    int nbu;
    nbu = va_arg(ap, int);
    my_put_nbr_uni(nbu);
    return (0);
}
