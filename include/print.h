/*
** EPITECH PROJECT, 2022
** print
** File description:
** printf
*/

#ifndef printh
#define printh

#include <stdio.h>
#include <stdarg.h>
#include <unistd.h>
#include <stdlib.h>

int	my_printf(char *str, ...);
void my_putchar(char c);
int my_put_nbr(int number);
int my_putstr(char const *str);
int my_strlen(char const *str);
int	my_printf(char *str, ...);
int my_put_nbr_uni(int number);
void my_printf_disp(char *str, va_list ap, int i);
int ptrs(va_list ap);
int ptrd(va_list ap);
int ptri(va_list ap);
int ptr_pourc(va_list ap);
int ptrc(va_list ap);
int ptru(va_list ap);

#endif /*myh*/