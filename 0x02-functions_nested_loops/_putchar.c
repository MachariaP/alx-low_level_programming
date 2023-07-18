#include <unistd.h>

/**
 * _putchar outputs the letter c to the console
 * return 0
 * when there is error, -1 is returned.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
