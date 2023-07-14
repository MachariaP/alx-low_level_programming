#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define NUMBER '0'
#define LIMIT '9'

/**
 *main- single digit numbers to base1 10 displayed each on new line
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;

	for (number = NUMBER; number <= LIMIT; number++)
	{
	putchar(number);
	}

	putchar('\n');
	return (0);
}
