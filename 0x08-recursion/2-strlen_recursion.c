#include "main.h"
#include <stdio.h>
/**
 *_strlen_recursion - returns the length of string
 *@s: string
 *Return: void
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
return (1 + _strlen_recursion(s + 1));
}
