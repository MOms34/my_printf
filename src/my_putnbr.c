/*
** EPITECH PROJECT, 2021
** task04
** File description:
**
*/

#include "../include/print.h"

int my_put_nbr(int nb)
{
    if (nb < 0) {
        my_putchar('-');
        nb = nb * (-1);
        return (0);
    }
    if (nb == 0) {
        my_putchar('0');
        return (0);
    }
    if (nb < 10 && nb > 0) {
        my_putchar(48 + nb);
        return (0);
    }
    if (nb / 10 >= 0) {
        my_put_nbr(nb/10);
        my_putchar(nb % 10 + 48);
    }
    return (0);
}
