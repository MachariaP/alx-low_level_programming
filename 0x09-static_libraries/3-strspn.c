#include "main.h"
#include <stdio.h>
/**
 *_strspn - gets length of a prefix substring
 *@s: first parameter[string]
 *@accept: second parameter[substring]
 *Return: s;
 */
unsigned int _strspn(char *s, char *accept)
{
int a, b, c;
c = 0;
for (a = 0; s[a] >= '\0'; a++)
{
for (b = 0; accept[b] > '\0'; b++)
{
if (s[a] == accept[b])
{
c++;
break;
}
}
if (accept[b] == '\0')
{
break;
}
}
return (c);
}
