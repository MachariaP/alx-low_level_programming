#include "main.h"
#include <stdio.h>

/**
 *_memset - fills memory with a constant number of bytes
 *@s: pointer with the constant byte
 *@b: constant byte
 *@n: number of bytes
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
i = 0;
while (i < n)
{
s[i] = b;
i++;
}
return (s);
}
