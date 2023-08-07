#include <stdio.h>
#include <stdlib.h>

/**
 *main - prints file name
 *@argc: argument count
 *@argv: argument vector
 *DESCRIPTION: prints file name
 *Return: Always (0) Success
 */

int main(int argc, char *argv[])
{
	int i;

	i = 0;
	while (i < argc)
	{
		printf("%s\n", argv[0]);
		i++;
	}
	return (0);
}
