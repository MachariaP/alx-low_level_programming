#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 *main- printing alphabets in lowercase except e and q
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int alphabets;
	char s = '\n';

	for (alphabets = 'a' ; alphabets <= 'z' ; alphabets++)
	{
		if (alphabets != 'e' && alphabets != 'q')
		{
			putchar(alphabets);
		}
	}
	putchar(s);
	return (0);
}
