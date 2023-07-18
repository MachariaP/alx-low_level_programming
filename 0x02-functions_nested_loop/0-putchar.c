#include "main.h"

/**
 * function main prints the string _putchar to the console
 * return 0
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
