#include <unistd.h>

/**
 * _putchar writes the string characters to the console
 * return 0 on success
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
