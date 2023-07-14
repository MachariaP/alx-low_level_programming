#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define MAX 10
#define MIN 0
#define SEPARATOR '0'

/**
 * main - all possible combinations for single digit numbers
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int digit;

	for (digit = MIN ; digit < MAX ; digit++)
	{
		putchar(digit + SEPARATOR);
		if (digit != (MAX - 1))
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
