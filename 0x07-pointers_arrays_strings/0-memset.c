#include "main.h"
#include <stdio.h>

/**
 * *_memset - fills memory with a constant byte
 * @s: pointer to the memory area 
 * @b: the constant byte to go to the memory
 * @n: number of bytes
 * Return: pointer to memory 's'
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

	return s;
}
