#include "main.h"
#include <stdio.h>
/**
 * swap_int - function to swap two integers
 * @a: the first integer decleared
 * @b: the second integer decleared
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
