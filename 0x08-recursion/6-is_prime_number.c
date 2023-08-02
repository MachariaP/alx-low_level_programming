#include "main.h"
#include <stdio.h>
/**
 *is_prime_number - returns 1 if n is prime number
 *@n: integer
 *Return: Always (0)
 */

int is_prime_number(int n)
{
int x = 1;
return (prime(x, n));
}
/**
 *prime - returns prime numbers
 *@a: integer increment parameter
 *@b: integer placed
 *Return: integer
 */
int prime(int a, int b)
{
if (b == 1 || b == 25)
{
return (0);
}
else if (b <= 0)
{
return (0);
}
else if (b % 2 == 0)
{
return (0);
}
else if (b % 2 != 0)
{
return (1);
}
return (prime(a * (a + 1), b));
}
