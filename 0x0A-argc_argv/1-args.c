#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints number of arguments passed
 *@argc: first parameter
 *@argv: second parameter
 *DESCRIPTION: prints number of arguments
 *Return: Always (0) Success
 */

int main(int argc, char **argv)
{
int i;
for (i = 0; i < argc; i++)
{
argv[i] = argv[i];
}
printf("%d\n", i - 1);
return (0);
}
