#include <stdio.h>
#include <time.h>
#include <stddef.h>
/**
 *main - entrypoint for prints all possible different combination of two digits
*Return: Always 0 (Success)
*/
int main(void)
{
int a = 0;
int b;
int c;
while (a < 10)
{
b = 0;
while (b < 10)
{
c = 0;
while (c < 10)
{
if ((!(a == b || b == c || a == c))&&(a < b && b < c))
{
putchar('0' + a);
putchar('0' + b);
putchar('0' + c);
if ((!(a == 7 && b == 8 && c == 9)))
{
putchar(' ');
putchar(',');
}
}
c++;
}
b++;
}
a++;
}
return (0);
}
