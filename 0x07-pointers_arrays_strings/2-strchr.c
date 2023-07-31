#include "main.h"
/**
 * _strchr - locates characters in the string
 *@s: first parameter
 *@c: second parameter
 *Return: NULL ('\0')
 */
char *_strchr(char *s, char c)
{
int i;
i = 0;
while (s[i] >= '\0')
{
if (s[i] == c)
{
return (s + i);
}
i++;
}
return ('\0');
}
