#include "main.h"

/**
 * _abs - returns the absolute value
 * @n: nthe absolute number
 * Return: return the absolute value i.e n or 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else if (n > 0)
	{
		return (n);
	}
	else
	{
		return (0);
	}
}
