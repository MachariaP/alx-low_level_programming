#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: decreared
 * Return: void
 */

void rev_string(char *s)
{
	int a, b, temp;
	/* a = begin */
	/* b = end */
	
	a = 0;
	while(s[a] != '\0')
	{
		a++;
	}
	a--;
	for(b = 0; a > b; b++, a--)
	{
		temp = s[a];
		s[a] = s[b];
		s[b] = temp;
	}
}
