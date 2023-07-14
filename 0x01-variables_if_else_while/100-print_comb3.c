#include <stdio.h>
#include <time.h>
/**
 *main - entrypoint for prints all possible different combination of two digits
*Return: Always 0 (Success)
*/
int main(void)
{
int a = 0;
int b;
while (a < 10)
{
b = 0;
while (b < 10)
{
if ((!(a == b)) &&a < b)
{
putchar('0' + a);
putchar('0' + b);
if ((!(a == 8 && b == 9)))
{
putchar(' ');
putchar(',');
}
}
b++;
}
a++;
}
return (0);
}
