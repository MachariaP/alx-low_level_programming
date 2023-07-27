#include "main.h"

/**
 * cap_string - Capitalizes all words of a string.
 *
 * @s: s is the world to be analyzed
 *
 * Return: Always 0.
 */
char *cap_string(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		if (s[0] <= 122 && s[0] >= 97)
		{
			s[0] = s[0] - 32;
		}
		if (s[i] == 32 || s[i] == 46 || s[i] == '\t' ||
		    s[i] == '\n' || s[i] == 44 || s[i] == 59 ||
		    s[i] == '!' || s[i] == '?' || s[i] == '(' ||
		    s[i] == ')' || s[i] == '{' || s[i] == '}')
		{
			if (s[i + 1] <= 122 && s[i + 1] >= 97)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
		i++;
	}
	return (s);
}
