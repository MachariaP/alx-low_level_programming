#include "main.h"
/**
 * _sqrt_recursion - returns the sqrt of a number
 * @n: first parameter
 *
 * Description: uses recursion
 * Return: Always(0) Success
 */
int _sqrt_recursion(int n)
{
	return (sqrt_value(1, n));
}

/**
 * sqrt_value - recursion function to find square root
 * @a: integer to be squared
 * @b: integer that is square of @a
 * Return: Integer
 */

int sqrt_value(int a, int b)
{
	if (a * a > b)
	{
		return (-1);
	}
	if (a * a == b)
	{
		return (a);
	}
	else
		return (sqrt_value((a + 1), b));
}
