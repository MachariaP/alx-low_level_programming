#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string
 * @str: a string is decleared
 * Return: void
 */

void _puts(char *str)
{
int x;
for (x = 0; str[x] != '\0'; x++)
{
_putchar(str[x]);
}
_putchar('\n');
}
