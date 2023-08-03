#include "main.h"
#include <stdio.h>

int check(char *, int);
int length(char *);

/**
 * is_palindrome - checks if a string is a palindrome
 * @s: the string to be checked
 * Return: 1 if the string is palindrome otherwise 0
 */

int is_palindrome(char *s)
{
int leng;
leng = length(s);
return (check(s, leng - 1));
}
/**
 * length - returns the length of a string
 * @s: the string to be checked
 * Return: the length of the string @s
 */
int length(char *s)
{
if (*s != '\0')
{
return (1 + length(s + 1));
}
return (0);
}

/**
 * check - checks if a string is a palindrome
 * @s: the string to be checked
 * @leng: the length of the string
 * Return: 1 if the string is palindrome otherwise 0
 */

int check(char *s, int leng)
{
if (*s != s[leng])
{
return (0);
}
if (leng == 0 || leng == 1)
{
return (1);
}
return (check(s + 1, leng - 2));
}
