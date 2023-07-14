#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main- printing alphabets in lowercase the uppercase
*
* Return: Always 0 (Success)
*/

int main(void)
{
	char alphabets;
	char s = '\n';

	for (alphabets = 'a'; alphabets <= 'z'; alphabets++)
		putchar(alphabets);

	for (alphabets = 'A'; alphabets <= 'Z'; alphabets++)
		putchar(alphabets);

	putchar(s);

	return (0);
}
