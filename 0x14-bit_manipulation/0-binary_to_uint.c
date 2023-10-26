#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - Convert a binary number to an unsigned int.
 * @b: The binary string to convert.
 *
 * Return: The converted decimal number, or 0 if there's an unconvertible char.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int total = 0;

	if (b == NULL)
		return (0);

	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

	total = (total << 1) | (*b - '0');
		b++;
	}

	return (total);
}
