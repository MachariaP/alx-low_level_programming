#include "main.h"

/**
 *_puts_recursion - prints a string followed by a new line
 *@s: string
 *Return: void
 */

void _puts_recursion(char *s)
{
if (*s == '\0')
{
_putchar('\n');
}
else if (*s != '\0')
{
_putchar(*s);
_puts_recursion(s + 1);
}
}
