/*
** EPITECH PROJECT, 2021
** print
** File description:
** printf
*/

#include <stdio.h>
#include <stdarg.h>
#include "../include/print.h"

int ptr_pourc(va_list ap)
{
	int c;
	c = va_arg(ap, int);
	my_putchar('%');
	return (0);
}
int	my_printf(char *str, ...)
{
	int (*ptr[6])(va_list);
	ptr['s'] = &ptrs;
	ptr['i'] = &ptri;
	ptr['d'] = &ptrd;
	ptr['u'] = &ptru;
	ptr['c'] = &ptrc;
	ptr['%'] = &ptr_pourc;
	va_list ap;
	int i;
    va_start(ap, str);

	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] != '%')
			my_putchar(str[i]);
		if (str[i] == '%')
			ptr[str[++i]] (ap);
	}
	va_end(ap);
	return (0);
}
