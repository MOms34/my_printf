/*
** EPITECH PROJECT, 2021
** task04
** File description:
**
*/

#include "../include/print.h"

// void my_putchar(char c);
// int my_put_nbr(int nb);

int my_put_nbr_uni(int number)
{
    if (number == -2147483648) {
        my_putstr("-2147483648");
        return 0;
    }
    if (number == 0) {
        my_putchar('0');
        return 0;
    } else if (number < 0) {
        my_putchar('-');
        number = number * -1;
    }
    if (number > 0 && number <= 9){
        my_putchar(number + 48);
    } else {
        my_put_nbr(number / 10);
        my_putchar(number % 10 + 48);
    }
    return (0);
}
