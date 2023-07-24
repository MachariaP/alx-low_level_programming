#include "main.h"
#include <stdio.h>
/**
 * a function to swap
 * two integers(a and b)
 * Return: void
 */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
