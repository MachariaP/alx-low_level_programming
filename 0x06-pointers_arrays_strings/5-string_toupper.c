#include "main.h"

/**
 *string_toupper - converts lowercase to upper case in a string
 *@s: first parameter
 *Return: Always (0) Success
 */

char *string_toupper(char *s)
{
int a = 0;
while (s[a] != '\0')
{
if ((s[a] >= 'a') && (s[a] <= 'z'))
{
s[a] = (s[a] - 32);
}
a++;
}
return (s);
}
