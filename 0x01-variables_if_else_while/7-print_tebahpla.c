#include <stdlib.h>
#include <time.h>
#include <stdio.h>

#define FIRST_LETTER 'a'
#define LAST_LETTER 'z'

/**
*main- printing lowercase alphabets in reverse
*
* Return: Always 0 (Success)
*/

int main(void)
{
char alphabets, s = '\n';
for (alphabets = LAST_LETTER; alphabets >= FIRST_LETTER; alphabets--)
{
putchar(alphabets);
}
putchar(s);

return (0);
}
