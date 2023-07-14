#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define NUMBER '0'
#define LIMIT '9'

/**
 *main- displaying hexadecimal numbers
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
for (number = 'a'; number <= 'f'; number++)
{
putchar(number);
}

putchar('\n');
return (0);
}
