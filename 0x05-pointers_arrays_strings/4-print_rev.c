#include "main.h"
#include <stdio.h>

/**
 *print_rev - print a string, in reverse
 *@s: character integer entered
 *Return: void
 */

void print_rev(char *s)
{
int x; /**forward*/
int y; /**reverse/backward*/
for (x = 0; s[x] != '\0'; x++)
{
}
for (y = x - 1; y >= s[x]; y--)
{
_putchar(s[y]);
}
_putchar('\n');
}
