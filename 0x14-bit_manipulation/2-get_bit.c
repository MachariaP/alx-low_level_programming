#include "main.h"

/**
 *get_bit - returns the value of a bit at a given index
 *@n: long integer
 *@index: index of a bit
 *Return: value of bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}


