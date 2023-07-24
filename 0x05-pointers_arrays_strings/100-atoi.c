#include "main.h"
#include <stdio.h>

/**
 * _atoi - converts strings to int
 * @s: first parameter
 *
 * Description: takes all types of char
 * Return: Always(0) Success
 */
int _atoi(char *s)
{
int result = 0;
int sign = 1;
int i = 0;

if (s[0] == '-')
{
sign = -1;
i++;
}
for (; s[i] != '\0'; ++i)
result = result * 10 + s[i] - '0';
return (sign *result);
}
