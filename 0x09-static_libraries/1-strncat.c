#include "main.h"
#include <stdio.h>
/**
*_strncat - concatenates 2 strings
*@dest: first parameter
*@src: second parameter
*@n: size of bytes
*Return: string dest
*/
char *_strncat(char *dest, char *src, int n)
{
int a;
int b;
a = 0;
while (dest[a] != '\0')
{
a++;
}
b = 0;
while (b < n && src[b] != '\0')
{
dest[a] = src[b];
a++;
b++;
}
dest[a] = '\0';
return (dest);
}
