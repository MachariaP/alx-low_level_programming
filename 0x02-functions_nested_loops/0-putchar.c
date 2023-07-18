#include "main.h"

/**
 * main - prints the word _putchar
 * Return: return 0
 */

int main(void)
{
	char word[9] = "_putchar";
	int i = 0;

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
