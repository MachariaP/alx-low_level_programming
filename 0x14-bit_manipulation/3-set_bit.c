#include "main.h"

/**
 * set_bit - sets the value of a bit at a given index
 * @n: number pointer
 * @index: given index
 * Return: i if it worked -1 if error occured
 **/


int set_bit(unsigned long int *n, unsigned int index)

{
	unsigned int num;

	if (index > (sizeof(unsigned long) * 8))
		return (-1);

	num = 1 << index;
	*n = *n | num;
	return (1);
}
