#include "main.h"
/**
 * flip_bits - a function that returns the number of bits you need to flip
 * @n: a given number
 * @m: a given number
 *
 * Return: number of bits you need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int bits;
	unsigned long int compute = n ^ m;

	for (bits = 0; compute != 0;)
	{
		if ((compute & 1) == 1)
			bits++;
		compute = compute >> 1;
	}
	return (bits);
}
