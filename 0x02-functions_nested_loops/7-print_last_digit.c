#include "main.h"

/**
 * pint_last_digit- prints the last digit of number
 * Return: the last digit
 */
int print_last_digit(int n)
{
    int last_dit = n % 10;

    if (n < 0)
    {
        last_dit = last_dit * -1;
    }
    _putchar(last_dit + '\0');
    return (last_dit);
}
