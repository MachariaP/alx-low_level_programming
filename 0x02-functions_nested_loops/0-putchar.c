#include "main.h"

/**
 * function main prints the string _putchar
 * after compiling return 0
 */

int main(void)
{
	int i = 0;
	char word[9] = "_putchar";

	while (i < 8)
	{
		_putchar(word[i]);
		i++;
	}
	_putchar('\n');
	return(0);
}
