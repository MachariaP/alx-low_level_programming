#include "main.h"

/**
 * leet - Encodes a string in 1337
 *
 * @str: String to be encoded
 *
 * Return: Always 0.
 */
char *leet(char *str)
{
	int a = 0;
	int b;
	char s[] = "aAeEoOtTlL";
	char s1[] = "4433007711";

	for (; str[a] != '\0'; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			if (s[b] == str[a])
			{
				str[a] = s1[b];
			}
		}
	}
	return (str);
}
