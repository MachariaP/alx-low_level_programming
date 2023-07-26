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
	int index = 0, dest_len = 0;

	while(dest[index++])
		dest_len++;

	for(index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return(dest);
}
