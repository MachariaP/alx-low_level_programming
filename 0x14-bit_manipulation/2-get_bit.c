#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @n: long integer
 * @index: index of a bit
 * Return: value of bit at index, or -1 if index is out of range
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int max_index = sizeof(unsigned long int) * 8 - 1;

	if (index > max_index)
	{
		return (-1)
	}

	unsigned long int mask = 1UL << index;

	return ((n & mask) !=0);
}
