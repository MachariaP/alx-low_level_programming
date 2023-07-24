#include "main.h"
#include <stdio.h>

/**
 *puts_half - prints half of a string
 *@str: character integer
 */
void puts_half(char *str)
{
int i, len, start;
len = 0;

for (i = 0; str[i] != '\0'; i++)
{
len = i;
}
if (len % 2 == 0)
{
for (start = (len / 2) + 1; start <= len; start++)
{
_putchar(str[start]);
}
}
else
{
for (start = ((len - 1) / 2) + 1; start <= len; start++)
{
_putchar(str[start]);
}
}
_putchar('\n');
}
