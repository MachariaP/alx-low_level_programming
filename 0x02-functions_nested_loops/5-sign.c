#include "main.h"

/**
 * print_sign - prints if a number
 * is positive or negative
 * @n: number being checked
 * Return: 1 if positive, 0 if zero,
 * -1 if negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0 + '\0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
