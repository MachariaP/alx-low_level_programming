#include "main.h"
#include <stdio.h>

/**
 * _strncat function concatenates two strings
 * @dest : the first part of the string parameter
 * @src : is the second string parameter
 * @n : integer perameter to compare index to
 * Return : returns the concatenated string
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
