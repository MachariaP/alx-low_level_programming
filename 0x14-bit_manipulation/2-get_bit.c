#include "main.h"

/**
 * get_bit - is a function that returns the value of a bit at a given index
 * @n - is a long integer
 * @index - is the index of a bit
 * Return - value to be returned
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= 32) 
	{
		return -1;
	}

	return (n >> index) & 1;
}
