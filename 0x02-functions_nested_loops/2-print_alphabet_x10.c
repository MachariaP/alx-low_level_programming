#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 * 10 times in lower case
 */




void print_alphabet_x10(void)
{
	int i;
	char al;

	for (i = 0; i < 10; i++)
	{
		for (al = 'a'; al <= 'z'; al++)
		{
			_putchar(al);

		}
		_putchar('\n');
	}

}
