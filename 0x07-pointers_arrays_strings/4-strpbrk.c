#include "main.h"
#include <stdio.h>

/**
 * _strpbrk - searches a string of any set
 *@s: source
 *@accept: destination
*Return: s or accept or null
*/

char *_strpbrk(char *s, char *accept)
{
int a, b;
a = 0;
while (s[a] != '\0')
{
b = 0;
while (accept[b] != '\0')
{
if (s[a] == accept[b])
{
return (s + a);
}
b++;
}
if (s[a] == accept[b])
{
return (s + a);
}
a++;
}
return ('\0');
}
