#include "main.h"
/**
 * clear_bit - sets a number to 0 in a given index
 * @index: bit to change
 * @n: pointer to number
 * Return: 1 if succesful -1 if error occurred
 **/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long clear;

	if (index > sizeof(unsigned long) * 8)
		return (-1);
	clear = ~(1 << index);
	*n = *n & clear;
	return (1);
}
